
#include<iostream>
#include<vector>
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
bool optmize_palindrome(Node* head){
    Node* temp=head;
    Node* tail=head;
    while(tail!=NULL){
        tail=tail->next;
    }
    while(temp!)
}

int main(){
    vector<int>arr={23,4,56,8};
    Node* head=convertArr2LL(arr);
    printll(head);
    return 0;  
}
