#include <bits/stdc++.h>
using namespace std;
int main() {
   string s;
   getline(cin , s);
   set<char> st(s.begin(), s.end());
   if(st.size() == 2){
    cout<<0;
   }
   else if (st.size() == 3){
    cout<<1;
   }
   else{
     cout<<st.size()-4;
   }
   return 0;
  }
  