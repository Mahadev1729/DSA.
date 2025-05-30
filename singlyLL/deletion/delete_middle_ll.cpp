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
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL){
      cnt++;
      temp=temp->next;
    }
    return cnt;
}

Node* delete_middle_ll(Node* head){
    int res= count(head)/2;
    Node* temp=head;
    
    while(temp!=NULL){
       res--;
       if(res==0){
        Node* middleNode=temp->next;
        temp->next=temp->next->next;
        free(middleNode);
        break;
       }
       temp=temp->next;
    }
    return head;
}
int main(){
    vector<int>arr={23,4,56,8,90};

    Node* head=convertArr2LL(arr);
    Node* middleNode=delete_middle_ll(head);
    printll(middleNode);
    
    // printll(head);
    return 0;  
}
