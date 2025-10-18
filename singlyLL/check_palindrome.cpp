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
void printll(Node* head){
    Node * q=head;
    while(q!=NULL){
        cout<<q->data<<" ";
        q=q->next;
    }
}

bool isPalidrome(Node* head){
    Node* temp=head;
    stack<int>st;
    while(temp!=nullptr){
        st.push(temp->data);
        temp=temp->next;
    }

   Node* temp1=head;
   while(temp1!=nullptr){
    if(temp1->data!=st.top()) return false;
    temp=temp->next;
    st.pop();

   }
   return false;
}
int main(){
    vector<int>arr={23,4,4,23};
    Node* head=convertArr2LL(arr);
    printll(head);
    cout<<endl;
    cout<<isPalidrome(head);
    return 0;  
}
