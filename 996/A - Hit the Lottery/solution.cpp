#include <bits/stdc++.h>
using namespace std;
int main() {
  long long n;
  cin>>n;
 long a = n/100;
 int b = (n%100)/20;
 int c = ((n%100)%20)/10;
 int d = (((n%100)%20)%10)/5;
 int e = (((n%100)%20)%10)%5;
 cout<<(a+b+c+d+e);
   return 0;
  }