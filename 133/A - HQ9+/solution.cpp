#include <bits/stdc++.h>
using namespace std;
int main() {
    string m ;
    int n = 0;
    cin>>m;
    for (int i = 0 ; i < m.size() ; i++){
      if (m[i] == 'H' || m[i] == 'Q' || m[i] == '9'){
          n = 1;
          break;
      }
      else{
        n = 0 ;
      }
    }
    if (n == 1){
      cout<<"YES";
    }
    else{
      cout<<"NO";
    }
    return 0;
  }