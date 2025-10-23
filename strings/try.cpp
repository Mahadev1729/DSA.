#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "APPLIED MATERIALS";
    int n = 7;
    int index = 0;
    int len = s.length();

    for (int i = 1; i <= n; i++) {           
        for (int j = 0; j < i; j++) {  
            int it=index % len;      
            cout << s[it];          
            index++;
        }
        cout << endl;
    }

    return 0;
}
