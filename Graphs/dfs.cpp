#include<iostream>
#include<vector>
#include<stack>
// recursion

void dfs(int node,vector<int.adj[],int vis[],vector<int>&ls){
    vis[node]=1;
    ls.push_back(node);
    for(auto it:adj[node]){
        if(!vis[it]){
            dfs(it,adj,vis,ls);
        }
    }
}
