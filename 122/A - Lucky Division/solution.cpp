#include <bits/stdc++.h>
using namespace std;
 
int main() {
 int x ;
 int h = 0;
 cin>>x;
 vector<int> v;
 if (x % 4 == 0 || x % 7 == 0 || x % 47 == 0||  x % 447 == 0|| x % 774 == 0 || x % 744 == 0 || x % 477 == 0){
   cout<<"YES";
 }
 else{
   cout<<"NO";
 }
 return 0;
}