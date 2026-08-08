#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int a;
   int b = 0;
   int c = 0;
   cin>>a;
   vector<int> v(a*2);
   for(int i = 0 ; i < (a*2) ; i++){
    cin>>v[i];
   }
   for(int i = 0 ; i < (a*2) ; i= i+2){
        b = b + (v[i+1] - v[i]);
        if (b > c){
          c = b;
        }
      }
   cout<<c;
  return 0;
}