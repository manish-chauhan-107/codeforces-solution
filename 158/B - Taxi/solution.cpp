#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int a, b, c, d;
    a = 0;
    b = 0;
    c = 0;
    d = 0;
 
    int ans = 0;
 
    vector<int> v(n);
 
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
 
    sort(v.begin(), v.end());
 
    for (int i = 0; i < n; i++) {
        if (v[i] == 1) {
            a++;
        }
        else if (v[i] == 2) {
            b++;
        }
        else if (v[i] == 3) {
            c++;
        }
        else {
            d++;
        }
    }
 
    while (a > 0 && c > 0) {
        ans++;
        a--;
        c--;
    }
 
    while (c > 0) {
        ans++;
        c--;
    }
 
    while (b >= 2) {
        ans++;
        b = b - 2;
    }
 
    if (b == 1) {
        ans++;
        b--;
 
        if (a >= 2)
            a = a - 2;
        else
            a = 0;
    }
 
    while (a >= 4) {
        ans++;
        a = a - 4;
    }
 
    if (a > 0)
        ans++;
 
    ans = ans + d;
 
    cout << ans << endl;
 
    return 0;
}