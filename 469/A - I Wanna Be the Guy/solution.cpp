#include <bits/stdc++.h>
using namespace std;
int main() {
  int n ,p , q;
  cin>>n;
  set<int> s;
  cin>>p;
  for(int i = 0 ; i < p ; i++){
    int m ;
    cin>>m;
    s.insert(m);
  }
  cin>>q;
  for(int i = 0 ; i < q ; i++){
    int l ;
    cin>>l;
    s.insert(l);
  }
  if(s.size() == n){
    cout<<"I become the guy.";
  }
  else{
    cout<<"Oh, my keyboard!";
  }
   return 0;
  }