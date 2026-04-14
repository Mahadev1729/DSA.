#include<bits/stdc++.h>

using namespace std;

vector<int> bfsGraph(int V, vector<int>adj){
    int vis[n]={0};
    vis[0]=1;
    queue<int>q;
    q.push(0);
    vector<int>bfs;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        bfs.push(node);
        for(auto it:adj[node]){
            if(!vis[it]){
                vis[it]=1;
                q.push(it);
            }
        }

    }
}

int main(){

}
