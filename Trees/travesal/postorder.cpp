class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>res;
        postorder(root,res);
        return res;
    }

private:
    void postorder(TreeNode* root,vector<int>&points){
        if(root==NULL){
            return;
        }
        postorder(root->left,points);
        postorder(root->right,points);
        points.push_back(root->val);
    }
};
