#include<iostream>
#include<vector>
#include <unordered_map>
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

bool detect_loop_LL(Node* head){
    unordered_map<Node*,int>mp;
    Node* temp=head;
    while(temp!=NULL){
        if(mp.find(temp)!=mp.end()){
            return true;
        }
        mp[temp]=1;
        temp=temp->next;
    }
    return false;
}
int main(){
    vector<int>arr={23,4,56,8};
    Node* head=convertArr2LL(arr);
    cout<<detect_loop_LL(head);
    cout<<endl;
    printll(head);
    return 0;  
}
