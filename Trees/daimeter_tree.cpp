#include<bits/stdc++.h>

using namespace std;




/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
  int height(TreeNode* node, int & daimeter){
    if(!node){
        return 0;
    }

    int lh=height(node->left,daimeter);
    int rh=height(node->right,daimeter);
    daimeter=max(daimeter,rh+lh);
    return 1+max(rh,lh);
  }

public:
    int diameterOfBinaryTree(TreeNode* root) {
       int dai=0;
       height(root,dai);
       return dai;
    }
};}
