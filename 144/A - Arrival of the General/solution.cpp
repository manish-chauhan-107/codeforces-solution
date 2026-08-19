#include <bits/stdc++.h>
using namespace std;
int main() {
   int t, m , n ;
   int p,q;
   p = 0 ;
   q = 0 ;
   cin>>t;
   vector<int> v(t,0);
   for (int i = 0 ; i < t ; i++){
    cin>>v[i];
   }
   m = *max_element(v.begin(), v.end());
   n = *min_element(v.begin(), v.end());
   bool flag = true;
   for (int i = 0 ; i < t ; i++){
        if (v[i] == m && flag){
          if(i == 0){
          p = 0;
          flag = false;
          }
          else{
            p = i;
            flag = false;
          }
        }
        else if(v[i] == n){
          q = i;
        }
   }
   if(p > q){
   cout<<((p-1)+(t-q)-1);
   }
   else{
    cout<<((p-1)+(t-q));
   }
   return 0;
  }