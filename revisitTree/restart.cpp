#include<bits/stdc++.h>

using namespace std;


// about tree

class TreeNode{
    public:
    int data;
    TreeNode* right;
    TreeNode* left;
    TreeNode(int value){
        data=value;
        right=left=nullptr;
        
    }
};

void preorder_travesal(TreeNode* root){
    if(root== nullptr) return ;
    cout<<root->data<<" ";
    preorder_travesal(root->left);
    preorder_travesal(root->right);
}
int main(){
    TreeNode* root=new TreeNode(10);
    // 1st level
    root->left=new TreeNode(12);
    root->right=new TreeNode(13);

    // 2nd level

    root->left->right=new TreeNode(14);
    root->left->right=new TreeNode(15);
    cout<<"Preorder Travesal:"<<endl;
    preorder_travesal(root);

    return 0;

}
