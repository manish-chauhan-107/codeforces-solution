#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int t ;
  cin>>t;
  while(t--){
    vector<int> v(3);
    cin>>v[0];
    cin>>v[1];
    cin>>v[2];
    sort(v.begin() , v.end());
    if (v[0] == v[1]){
      cout<<v[2]<<endl;
    }
    else{
      cout<<v[0]<<endl;
    }
  }
  return 0;
}