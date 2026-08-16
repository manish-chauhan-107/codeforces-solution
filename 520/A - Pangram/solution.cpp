#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    set<char> c;
    cin >> n;
    string s ;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (int i = 0 ; i < n ; i++){
      c.insert(s[i]);
    }
    if(c.size() == 26){
      cout<<"YES";
    }
    else{
      cout<<"NO";
    }
    return 0;
  }