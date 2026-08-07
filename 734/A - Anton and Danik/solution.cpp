#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a , n , m;
    n = 0;
    m = 0;
    string s;
    cin>>a;
    cin>>s;
    for(int i = 0 ; i < a ; i++){
        if (s[i] == 'A'){
            n = n+1;
        }
        else{
            m = m+1;
        }
        }
    if (n > m) {
        cout << "Anton";
    }
    else if (m > n) {
        cout << "Danik";
    }
    else {
        cout << "Friendship";
    }
    return 0;
}