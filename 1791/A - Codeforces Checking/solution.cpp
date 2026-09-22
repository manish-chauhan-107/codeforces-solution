#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        char m;
        cin >> m;
 
        string n = "codeforces";
        bool found = false;
 
        for(int i = 0; i < 10; i++) {
            if(n[i] == m) {
                found = true;
                break;
            }
        }
 
        if(found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
 
    return 0;
}