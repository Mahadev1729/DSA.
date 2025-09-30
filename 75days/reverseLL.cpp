#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int v):val(v),next(NULL){}
};

Node* reverseList(Node* head){
    Node* prev=NULL;
    Node* cur=head;
    while(cur){
        Node* nxt=cur->next;
        cur->next=prev;
        prev=cur;
        cur=nxt;
    }
    return prev;
}

int main(){
    Node* head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    Node* rev=reverseList(head);
    while(rev){ cout<<rev->val<<" "; rev=rev->next; }
    // Output: 3 2 1
}
