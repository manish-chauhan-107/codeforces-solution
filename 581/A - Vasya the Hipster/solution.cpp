#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int t , m;
  cin>>t>>m;
  int y = abs((t - m)/2);
  int z = min(t ,m);
  cout<<z<<" "<<y;
  return 0;
}