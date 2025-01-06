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
    Node* q=head;
    while(q!=NULL){
        cout<<q->data<<" ";
        q=q->next;
    }
}
Node* removeonValue(Node* head,int val){
    if(head==NULL) return head;
    if(head->data==val){
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
        if(temp->data==val){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }

  return head;

}
int main(){
    vector<int>arr={34,56,67,78,90};
    Node * head=convertArr2LL(arr);
    removeonValue(head,34);
    printll(head);
    return 0;
}

