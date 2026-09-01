#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string n, m , o;
    string p;
    cin >> n >> m >> o;
        p = n+m;
        sort(p.begin(), p.end());
        sort(o.begin(), o.end());
 
        if (p == o)
        cout << "YES" << endl;
        else{
        cout << "NO" << endl;
        }
 
    return 0;
}