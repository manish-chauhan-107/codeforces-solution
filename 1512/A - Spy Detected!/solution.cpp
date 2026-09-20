#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int t ;
  cin>>t;
  while(t--){
    int m;
    cin>>m;
    vector<int> v(m);
    for(int i  = 0 ; i < m ; i++){
      cin>>v[i];
    }
    for(int i  = 0 ; i < m-2 ; i++){
      if(v[i] != v[i+1] && v[i+1] != v[i+2] ){
        cout<<i+2<<endl;
        break;
      }
      else if (v[i] != v[i+1] && v[i+1] == v[i+2]){
        cout<<i+1<<endl;
        break;
      }
      else if (v[i] == v[i+1] && v[i+1] != v[i+2]){
        cout<<i+3<<endl;
        break;
      }
    }
  }
  return 0;
}