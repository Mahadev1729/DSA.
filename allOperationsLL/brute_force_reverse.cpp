#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* convertArr2LL(vector<int>arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

Node* brute_force_reverse(Node* head){
    Node* temp=head;
    stack<int>st;
    while(temp!=NULL){
        st.push(temp->data);
    }
    Node* temp1=head;
    while(temp!=NULL){
        temp1->data=st.top();
        st.pop();
        temp1=temp1->next;
    }
    return head;
}

Node* reverse_optimal(Node* head){
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
        Node* front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }
    return prev;
}
void printll(Node* head){
    Node * q=head;
    while(q!=NULL){
        cout<<q->data<<" ";
        q=q->next;
    }
}
int main(){
    vector<int>arr={23,4,56,8};
    Node* head=convertArr2LL(arr);
    head=brute_force_reverse(head);
    printll(head);
    return 0;  
}
