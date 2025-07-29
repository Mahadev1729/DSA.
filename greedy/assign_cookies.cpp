class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        int l=0;
        int r=0;
        int n=g.size();
        int m=s.size();
        while(l<m && r<n){
            if(g[r]<=s[l]){
                r++;
            }
            l++;
        }
        return r;

    }
};
