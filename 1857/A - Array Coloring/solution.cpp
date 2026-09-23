#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int t ;
  cin>>t;
  while(t--){
    int m ;
     cin>>m;
     vector<int> v(m);
     for(int i = 0 ; i < m ; i++){
        cin>>v[i];
     }
     int sum = accumulate(v.begin(), v.end(), 0);
     if(sum % 2 == 0){
      cout<<"YES"<<endl;
     }
     else{
      cout<<"NO"<<endl;
     }
  }
  return 0;
}