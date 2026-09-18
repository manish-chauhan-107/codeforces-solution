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
    cout<<v[1]<<endl;
  }
  return 0;
}