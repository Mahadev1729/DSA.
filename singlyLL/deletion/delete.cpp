//arr[]=[2,1,3,8]
#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    public:
    Node(int data1){
      data=data1;
      next=nullptr;
    }
};
Node* convertArr2LL(vector<int>arr){
    Node* head=new Node(arr[0]);
    Node *mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
int lengthofLL(Node* head)
{
    int length=0;
    Node* temp=head;
    while(temp){
        temp=temp->next;
        length++;
        

    }
    return  length;
}
int search(Node *head,int val)
{
    Node* temp=head;
    while(temp){
        if(temp->data==val) return 1;
    }
}
Node* removehead(Node* head){
    if(head==NULL) return head;
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}
Node* removeTail(Node* head){
    Node* temp=head;
    if(head==NULL || head->next!=NULL) return NULL;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    free(temp->next);
    temp->next=nullptr;
    return head;
    
}
int main(){
    vector<int> arr={12,5,8,7,9};
    Node * head=convertArr2LL(arr);
    cout<<endl;
    int len=lengthofLL(head);
    cout<<len<<""<<endl;
    //cout<<head->data;
    head=removeTail(head);
    Node *temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}
