#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int cost = 0;
    int m = 0 ;
    int k,n,w;
    cin>>k>>n>>w;
    for (int i = 1 ; i < w+1 ; i++){
        m = k*i;
        cost = cost + m ;
    }
    if (cost < n){
        cout<<0;
    }
    else {
        cout<<abs(n-cost);
    }
    return 0;
}