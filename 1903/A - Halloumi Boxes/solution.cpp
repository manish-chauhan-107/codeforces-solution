#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int t , k , n;
  bool issort ;
  cin>>t;
  while(t--){
    cin>>n>>k;
     vector<long long> v(n);
      for (int i = 0 ; i < n ; i++){
       cin>>v[i];
      }
      for (int i = 0 ; i < n-1 ; i++){
            if (v[i] <= v[i+1]){
              issort = true;
            }
            else{
              issort = false;
              break;
            }
      }
      if (k >= 2 || issort == true){
       cout<<"YES"<<endl;
      }
     else{
       cout<<"NO"<<endl;
      }
  }
  return 0;
}