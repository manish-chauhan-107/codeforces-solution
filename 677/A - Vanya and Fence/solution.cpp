#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a,b;
    int n = 0;
    cin>>a>>b;
    vector<int> v(a);
    for(int i = 0 ; i < a ; i++){
      cin>>v[i];
    }
    for(int i = 0 ; i < a ; i++){
      if (v[i] <= b){
        n++;
      }
      else{
        n = n+2;
      }
    }
    cout<<n;
    return 0;
}