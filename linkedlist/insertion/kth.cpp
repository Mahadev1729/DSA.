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
int count(Node* head){
    int cnt=0;
    Node* q=head;
    while(q!=NULL){
        cnt++;
        q=q->next;
        
    }
    return cnt;
}
Node* inserationatKth(Node* head,int val,int k){
   
    if(head==NULL){
        if(k==1){
            return new Node(val);
        }
        else{
            return head;
        }
    }
    if(k==1){
     Node* temp=new Node(val);
    }
    Node* temp=new Node(val);
    int cont=0;
    while(temp!=NULL){
        cont++;
        if(cont==(k-1)){
            Node* newNode=new Node(val);
            newNode->next=temp->next;
            temp->next=newNode;
            break;
        }
       temp=temp->next;
    }
    return head;
}
    
int main(){
    vector<int>arr={23,4,56,8};
    Node* head=convertArr2LL(arr);
    Node* kthins=inserationatKth(head,3,45);
    printll(kthins);
    return 0;  
}
