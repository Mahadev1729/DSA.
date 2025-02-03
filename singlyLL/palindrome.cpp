#include<iostream>
#include<vector>
#include<stack>
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
bool isPalindrome(Node* head) {
        stack<int>st;
        ListNode* temp=head;
        while(temp!=NULL){
            st.push(temp->data);
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL){
            if(temp->data!=st.top()) return false;
            temp=temp->next;
            st.pop();
        }
        return true;
    }
int main(){
    vector<int>arr={23,4,56,8};
    Node* head=convertArr2LL(arr);
    printll(head);
    return 0;  
}
