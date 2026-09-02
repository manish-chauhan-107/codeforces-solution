#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int a;
   cin>>a;
   int n;
   int p = 0;
   int ans = 0 ;
   for (int i = 0 ;  i < a ; i++){
    cin>>n;
    if(n == -1){
       if(p == 0){
         ans ++;
    }
    else{
        p = p -1;
    }
    }
    else{
        p = p+n;
    }
   }
   cout<<ans;
    return 0;
}