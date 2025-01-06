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

Node* removekth(Node * head, int k){
    if(head==NULL) return head;
    if(k==1){
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    
    Node* temp=head;
    Node* prev=NULL;
    int count=0;
    while(temp != NULL){
        count++;
        if(count==k){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    
    return head;
}

void printll(Node* head){
    Node* q=head;
    while(q){
        cout<<q->data<<" ";
        q=q->next;
    }
}
int main(){
    vector<int>arr={3,4,5,6,7,8};
    Node* head=convertArr2LL(arr);
    removekth(head,1);
    printll(head);
    return 0;
}
