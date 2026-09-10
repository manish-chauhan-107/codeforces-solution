#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int t ;
   cin>>t;
   vector <int> v;
   for(int i = 0 ; i < t ; i++){
      int a ;
      cin>>a;
      v.push_back(a);
   }
   int s = 0;
   int d = 0;
   bool m = true;
   while(t--){
      if(m == true){
         int x =  max(v[0] , v[v.size()-1]);
         s = s + x;
         if (v.front() == x) {
           v.erase(v.begin()); 
         }
         else if (v.back() == x) {
             v.pop_back();
         }
         m = false;
      }
      else{
         int x =  max(v[0] , v[v.size()-1]);
         d = d + x;
         if (v.front() == x) {
           v.erase(v.begin()); 
         }
         else if (v.back() == x) {
             v.pop_back();
         }
         m = true;
      }
   }
   cout<<s<<" "<<d;
   return 0;
}