#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a;
    cin >> a;
 
    int x = 0, y = 0, z = 0;
 
    for (int i = 0; i < a; i++) {
        int xi, yi, zi;
        cin >> xi >> yi >> zi;
 
        x += xi;
        y += yi;
        z += zi;
    }
 
    if (x == 0 && y == 0 && z == 0)
        cout << "YES";
    else
        cout << "NO";
 
    return 0;
}