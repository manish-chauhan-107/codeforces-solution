#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
 int k , l , m;
 cin>>k>>l>>m;
 int ans;
 int a = k+l*m;
 int b = k*(l+m);
 int c = k*l*m;
 int d = (k+l)*m;
 int e = k+l+m;
 ans =  max({a, b, c, d, e});
 cout<<ans;
 return 0;
}