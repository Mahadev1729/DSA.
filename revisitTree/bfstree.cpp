#include<bits/stdc++.h>

using namespace std;

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
int eleSum(vector<int>&arr){
    int sum=0;
    for(auto it:arr){
        sum+=it;
    } 
    return sum;
}
vector<int> levelorder(TreeNode* root){
    vector<int> ans;
    if(root==NULL) return ans;
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        vector<int>level;
        for(int i=0;i<size;i++){
            TreeNode *node=q.front();
            q.pop();
            if(node->left!=NULL)q.push(node->left);
            if(node->right!=NULL)q.push(node->right);
            level.push_back(node->data);
        }
        ans.push_back(eleSum(level));
    }
    return ans;
}


int main(){
    TreeNode* root=new TreeNode(10);
    // 1st level
    root->left=new TreeNode(12);
    root->right=new TreeNode(13);

    // 2nd level

    root->left->left=new TreeNode(14);
    root->left->right=new TreeNode(15);
    
    

    vector<int>ans=levelorder(root);
    for(auto it:ans){
        cout<<it<<endl;
    }
    return 0;

}
