#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n = 0;
    int a,b;
    cin>>a>>b;
    while(a<=b){
    if (a>b){
        n = n;
     }
    else{
         a = a*3;
         b = b*2;
         n = n+1;
      }
    }
    cout<<n;
    return 0;
}