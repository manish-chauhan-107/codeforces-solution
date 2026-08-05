#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n = 0;
    long long m = 0 ;
    long long k,l,a;
    cin>>k>>l>>a;
 
    if (k % a != 0 ){
        m = (k/a) + 1;
    }
    else {
       m = (k/a); 
    }
    if (l % a != 0 ){
        n = (l/a) + 1;
    }
    else {
       n = (l/a); 
    }
    cout<<n*m;
    return 0;
}