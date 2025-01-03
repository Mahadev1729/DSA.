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
int main(){
    vector<int> arr={2,5,8,7};
    Node* node1=new Node(arr[0]);
    cout<<node1->data;
    // cout<<node1->next;
    return 0;
}
