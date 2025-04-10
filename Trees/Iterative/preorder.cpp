#include<bits/stdc++.h>

using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution{
    public:
    vector<int> preorderTravesal(TreeNode* root){
        vector<int>preOrder;
        if(root==NULL) return preOrder;

        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty()){
            root=st.top();
            preOrder.push_back(root->val);
            if(!root->right){
                st.push(root->right);
            }
            if(!root->left){
                st.push(root->left);
            }
        }
        return preOrder;
    }
}
