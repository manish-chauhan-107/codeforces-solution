#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s , t;
    int n = 0;
    cin>>s>>t;
    for(int i = 0 ; i < s.size() ; i++){
      if(s[i] == t[t.size()-1-i]){
            n = 1;
      }
      else{
        n = 0 ;
        break;
      }
    }
    if(n == 1 && s.size() == t.size()){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}