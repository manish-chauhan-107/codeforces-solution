#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string s;
  string m(5 ,' ');
  cin>>s;
  int j = 0;
  vector<char> v = {'h','e','l','l','o'};
      for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == v[j]){
            m[j] = s[i];
            j++;
        }
     }
  if ( m == "hello"){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
 return 0;
}