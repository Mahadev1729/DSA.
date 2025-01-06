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
    Node* mover=head;
    for(int i=1;i<arr.size();i++)
    {
        Node *temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
void printll(Node* head)
{
    Node* q=head;
    while(q){
        cout<<q->data<<" ";
        q=q->next;
    }
}
Node* removeTail(Node* head){
    Node* temp=head;
    if(head==NULL || head->next==NULL) return NULL;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
     free(temp->next);
    temp->next=nullptr;
    return head;
   
}
int main(){
    vector<int>arr={2,3,4,5,6};
    Node *head=convertArr2LL(arr);
    Node* tail=removeTail(head);
 
    printll(tail);
    return 0;
}
