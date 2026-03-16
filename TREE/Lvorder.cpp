#include<bits/stdc++.h>

using namespace std;

vector<vector<int>>ans;

void levelOrder(Node* root){
    if(root==nullptr) return;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        vector<int>level;
        for(int i=0;i<size;i++){
            Node* curr=q.front();
            q.pop();
            level.push_back(level);
            if(!curr->left){
                q.push(curr->left);
            }
            if(!curr->right){
                q.push(curr->right)
            }
        }
        ans.push_back(level);
    }
}
