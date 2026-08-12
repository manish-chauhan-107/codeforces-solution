#include <bits/stdc++.h>
using namespace std;
 
int main() {
 long long x ;
 cin>>x;
 long long k;
 cin>>k;
if (x%2 == 0){
   if (k <=  x/2){
      cout << (2*k-1);
   }
   else{
      cout << (2*(k-x/2));
   }
}
else{
   if (k <= (x/2)+1){
       cout<<(2*k - 1);
   }
   else{
      cout<<(2*(k-(x/2)-1));
   }
}
  return 0;
}