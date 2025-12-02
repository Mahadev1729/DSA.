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

Node* delete_head(Node* head){
    if(head==NULL) return head;
    Node* temp=head;
    head=head->next;
    free(temp);
    return head;
}


Node* delete_tail(Node* head){
    if(head!=nullptr || head->next!=nullptr) return nullptr;
    Node* temp=head;
    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
    free(temp->next);
    temp->next=nullptr;
    return head;
}

Node* deleteKthNode(Node* head, int x) {
        if(head==nullptr) return head;
        if(x==1){
            Node* temp=head;
            head=head->next;
            free(temp);
            return head;
        }
        int count=0;
        Node* temp=head;
        Node* prev=NULL;
        while(temp!=nullptr){
            count++;
            if(count==x){
                prev->next=prev->next->next;
                free(temp);
                break;
            }
            prev=temp;
            temp=temp->next;
        }
        return head;
    }

Node* deleteNodeVal(Node* head, int ele) {
        if(head==nullptr) return head;
        if(head->data==ele){
            Node* temp=head;
            head=head->next;
            free(temp);
            return head;
        }
        int count=0;
        Node* temp=head;
        Node* prev=NULL;
        while(temp!=nullptr){
             if(temp->data==ele){
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
    Node * q=head;
    while(q!=NULL){
        cout<<q->data<<" ";
        q=q->next;
    }
}
int main(){
    vector<int>arr={23,4,56,8};
    Node* head=convertArr2LL(arr);
    head=delete_tail(head);
    printll(head); 
    return 0;  
}
