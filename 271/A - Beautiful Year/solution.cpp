#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a;
    int n = 0;
    cin>>a;
    while(true){
      a++;
      n = a;
      set<int> s;
      while(n > 0){
        s.insert(n%10);
        n = n/10;
      }
      if(s.size() == 4){
       break;
      }
  }
  cout<<a;
    return 0;
}