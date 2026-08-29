#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int n;
  cin>>n;
  int ans = 0;
  vector<int> h;
  vector<int> g;
    for (int i = 0 ; i < 2*n ; i++){
        if (i%2 == 0){
            int x;
            cin>>x;
            h.push_back(x);
        }
        else{
            int x;
            cin>>x;
            g.push_back(x);
        }
    }
     for (int i = 0 ; i < h.size() ; i++){
         for (int j = 0 ; j < g.size() ; j++){
            if(h[i] == g[j]){
                ans = ans + 1;
            }
         }
     }
     cout<<ans;
 return 0;
}