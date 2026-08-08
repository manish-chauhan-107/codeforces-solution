#include <bits/stdc++.h>
using namespace std;
 
int main() {
 int x ;
 int h = 0;
 cin>>x;
 vector<int> v;
 if (x % 4 == 0 || x % 7 == 0 || x % 47 == 0 || x % 744 == 0){
   cout<<"YES";
 }
 else {
      int m = x;
      while (m > 0){
         v.push_back(m%10);
         m = m/10;
         }
         for(int i = 0 ; i < v.size() ; i++){
           if(v[i] == 4 || v[i] == 7){
               h = h+1;
            }
         }
         if(h == v.size()){
            cout<<"YES";
         }
         else{
           cout<<"NO";
         }
   }
 return 0;
}