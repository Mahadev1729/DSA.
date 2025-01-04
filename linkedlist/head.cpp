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
int main(){
    vector<int> arr={12,5,8,7};
    Node * head=convertArr2LL(arr);
    Node *temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    int len=lengthofLL(head);
    cout<<len<<"";
    //cout<<head->data;
    return 0;
}
