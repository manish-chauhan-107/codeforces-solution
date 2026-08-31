#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    vector<pair<int, int>> v(m);
 
    for (int i = 0; i < m; i++) {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
 
    for (int i = 0; i < m; i++) {
        if (n > v[i].first) {
            n = n + v[i].second;
        }
        else {
            cout << "NO";
            return 0;
        }
    }
 
    cout << "YES";
 
    return 0;
}