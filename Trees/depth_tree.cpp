#include<bits/stdc++.h>

using namespace std;


struct TreeNode{
    int data;
    TreeNode * left;
    TreeNode * right;
}

int maxDepth(TreeNode* root){
    if(root==NULL) return 0;
    int lh=maxDepth(root->left);
    int rh=maxDepth(root->right);
    return 1+max(lh,rh);
}
