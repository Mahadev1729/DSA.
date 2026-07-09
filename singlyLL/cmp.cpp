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

Node* swap_data(Node* head,int i,int j){
    Node* curr1=head;
    for(int k=0;k<i;k++){
        curr1=curr1->next;
    }
    Node* curr2=head;
    for(int k=0;k<j;k++){
        curr2=curr2->next;
    }

    swap(curr1->data,curr2->data);

    return head;

}
int main(){
    vector<int>arr={23,4,56,8};
    Node* head=convertArr2LL(arr);

    Node* ans=swap_data(head,1,2);

    printll(ans);
    return 0;  
}
