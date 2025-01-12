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
Node* insertHead(Node* head,int val){
    Node* temp=new Node(val);
    temp->next=head;
    return temp;
}
Node* insertTail(Node* head, int val){
    Node* temp=head;
    if(head==NULL) return head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* lastNode=new Node(val);
    temp->next=lastNode;
   
    return head;
}
int main(){
    vector<int>arr={23,4,56,8};
    Node* head=convertArr2LL(arr);
    // Node* inhead=insertHead(head,45);
    Node* inTail=insertTail(head,50);
    // printll(inhead);
    printll(inTail);
    return 0;  
}
