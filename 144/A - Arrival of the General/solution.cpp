#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int t; cin>>t;
   int M = INT_MIN;
   int m = INT_MAX;
   int P = 0;
   int p = 0;
   int temp;
   for(int i = 1; i<=t; i++){
    cin>>temp;
    if(temp>M){
        M=temp;P=i;
    }
    if(temp<=m){
        m=temp;p=i;
    }
   }
   int ans = P-1 + t-p;
   if(P>p)ans--;
   cout<<ans<<endl;
    return 0;
}