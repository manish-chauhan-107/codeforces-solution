#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int a;
   cin>>a;
   int b ;
   set<int>s;
   for (int i = 0 ; i < a ; i++){
    cin>>b;
    s.insert(b);
   }
   if (s.count(0) && s.size() == 1){
    cout<<"EASY";
   }
   else{
     cout<<"HARD";
   }
    return 0;
}