#include <bits/stdc++.h>
using namespace std;
 
int main() {
 int x ;
 cin>>x;
 int sum = 0;
 float total = 100*x;
 vector<int> v(x);
 for (int i = 0 ; i < x ; i++){
  cin>>v[i];
 }
 for (int i = 0 ; i < x ; i++){
   sum = sum + v[i];
}
cout << fixed << setprecision(11) << ((sum / total) * 100);
 return 0;
}