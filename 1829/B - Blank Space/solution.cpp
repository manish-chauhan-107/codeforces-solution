#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int t ;
  cin>>t;
  while(t--){
    int m ;
    int n = 0;
    int ans = 0;
     cin>>m;
     vector<int> v(m);
     for(int i = 0 ; i < m ; i++){
        cin>>v[i];
     }
     for(int i = 0 ; i < m ; i++){
        if(v[i] == 0){
          ans = ans+ 1;
          if(ans > n){
            n = ans;
          }
        }
        else{
          ans = 0;
        }  
     }
     cout<<n<<endl;;
  }
  return 0;
}