#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int t ,a ,b;
  cin>>t;
  while(t--){
    int a , b;
    cin>>a>>b;
    int c = abs(b-a);
    int ans = 0;
    if(c != 0 && c%10 == 0){
      ans = ((c/10));
    }
    else if(c != 0 ){
      ans = ((c/10)+1);
    }
    cout<<ans<<endl;
  }
  return 0;
}