#include <bits/stdc++.h>
using namespace std;
 
int main() {
 int x ;
 int ans = 1;
 cin>>x;
 vector<int> y(x);
 for (int i = 0 ; i < x ; i++){
   cin>>y[i];
 }
 for (int i = 0 ; i < x-1 ; i++){
      if(y[i] != y[i+1]){
         ans = ans + 1;
      }
 }
 cout<<ans;
 return 0;
}