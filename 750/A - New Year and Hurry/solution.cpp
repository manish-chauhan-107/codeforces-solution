#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int a , b;
   cin>>a>>b;
   b = 240-b;
   int ans = 0;
   for (int i = 1 ; i <= a ; i++){
    if(i*(i+1) <= 2*b/5 ) {
        ans = i;
    }
    else{
        break;
    }
   }
   cout<<ans;
   return 0;
}