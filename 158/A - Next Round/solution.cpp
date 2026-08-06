#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a ,x, b;
    cin>>a>>b;
    vector<int> v;
    int n = 0;
    for (int i = 0 ; i < a ; i++){
        cin>>x;
        v.push_back(x);
    }
    for (int i = 0 ; i < a ; i++){
        if( v[i] > 0 && v[i] >= v[b-1]){
            n = n+1;
        }
        else{
            n = n;
        }
    }
  cout<<n;
    return 0;
}