#include<bits/stdc++.h>

bool detect_Loop(Node* head){
    unordered_map<Node*,int>mpp;
    Node* temp=head;
    while(temp!=NULL){
        if(mpp.find(temp)!=mpp.end()){
            return true;
        }
        mpp[temp]=1;
        temp=temp->next;
    }
    return false;
}
