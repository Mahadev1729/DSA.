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

Node* insertHead(Node* head,int val){
    Node* temp=new Node(val);
    temp->next=head;
    return temp;
}

Node* insertTail(Node* head,int val){
    if(head==NULL){
        return new Node(val);
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* newNode=new Node(val);
    temp->next=newNode;
    return head;
}
Node* insertAtK(Node* head,int k,int ele){
   if(head=NULL){
    if(k==1) return new Node(ele);
    else return nullptr;
   }
   if(k==1){
    Node* temp=new Node(ele);
    temp->next=head;
    return head;
   }
   int cnt=0;
   Node* temp=head;
   while(temp!=NULL){
    cnt++;
    if(cnt==(k-1)){
        Node* x=new Node(ele);
        x->next=temp->next;
        temp->next=x;
        break;
    }
    temp=temp->next;
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
int main(){
    vector<int>arr={23,4,56,8};
    Node* head=convertArr2LL(arr);
    head=insertAtK(head,3,51);
    printll(head);
    return 0;  
}
