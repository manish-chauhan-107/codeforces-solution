#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    vector<int> v(m);
    vector<int> ans;
 
    for (int i = 0; i < m; i++) {
        cin >> v[i];
    }
 
    sort(v.begin(), v.end());
 
    for (int i = 0; i <= m - n; i++) {
        ans.push_back(v[i + n - 1] - v[i]);
    }
 
    cout << *min_element(ans.begin(), ans.end()) << endl;
 
    return 0;
}