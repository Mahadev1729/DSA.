#include<bits/stdc++.h>

using namespace std;

class BinaryTree{
    int data;
    BinaryTree* left;
    BinaryTree* right;
    BinaryTree(int val){
        data=val;
        left=right=nullptr;
    } 
};
void display(BinaryTree* bt){
    if(bt==NULL) return NULL;
    cout<<b->data<<endl;
    display(bt->left);
    display(bt->right)
}


int main(){
    BinaryTree root=new BinaryTree(1);
    root->left=new BinaryTree(2);
    root->right=new BinaryTree(3);
    root->left->left=new BinaryTree(4);
    root->left->right=new BinaryTree(5);
    display(root);
    return 0;
}
