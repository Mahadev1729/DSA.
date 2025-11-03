#include<bits/stdc++.h>

using namespace std;

    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for (int a : asteroids) {
            bool destroyed = false;

            while (!st.empty() && st.top() > 0 && a < 0) {
                if (abs(st.top()) < abs(a)) {
                    st.pop();           
                    continue;            
                } else if (abs(st.top()) == abs(a)) {
                    st.pop();            
                }
                destroyed = true;        
                break;
            }

            if (!destroyed) st.push(a);
        }

        
        vector<int> result(st.size());
        for (int i = st.size() - 1; i >= 0; i--) {
            result[i] = st.top();
            st.pop();
        }
        return result;
    }

int main(){
    vector<int>arr={4,7,1,1,2,-3,-7,17,15,-16};
    vector<int>res=asteroidCollision(arr);
    for(auto it:res){
        cout<<it<<" ";
    }
    return 0;

}
