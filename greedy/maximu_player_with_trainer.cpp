class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int l=0,r=0;
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int n=players.size();
        int m=trainers.size();
        int count=0;
        while(l<m && r<n){
            if(players[r]<=trainers[l]){
                r++;
            }
            l++;
        }
        return r;
    }
};
