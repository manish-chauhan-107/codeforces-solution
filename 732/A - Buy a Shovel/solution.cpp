#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int t , p;
   cin>>t>>p;
   int x = 0;
   while(++x){
      int a = x*t;
      if(a%10 == 0 || a%10 == p){
         cout<<x<<endl;
         break;
      }
   }
   return 0;
}