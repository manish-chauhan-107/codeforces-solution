#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int n;
  int m = 0 ;
  int a = 0;
  int b = 0;
  int p = 0;
  cin>>n;
  vector<int> h(n);
    for (int i = 0 ; i < n ; i++){
       cin>>h[i];
    }
    for (int i = 0 ; i < n ; i++){
       if (h[i] % 2 == 0){
            m = m+1 ;
            a = i+1;
       }
       else{
          p = p+1;
          b = 1+i;
       }
    }
    if(m > p){
        cout<<b;
    }
    else{
        cout<<a;
    } 
 return 0;
}