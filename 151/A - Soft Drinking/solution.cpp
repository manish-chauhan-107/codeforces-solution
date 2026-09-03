#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k, l, c, d, p, nl, np;
 
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
 
    int ans = min(min((l * k) / nl, c * d), p / np) / n;
 
    cout << ans << endl;
 
    return 0;
}