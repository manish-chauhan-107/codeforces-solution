#include <bits/stdc++.h>
using namespace std;
 
int main() {
int n;
int m = 1;
int p = 1;
cin>>n;
vector <long> a(n);
for(int i = 0 ; i < n ; i++){
   cin>>a[i];
}
for(int j = 0 ; j < n-1 ; j++){
    if(a[j] <= a[j+1]){
        m = m+1;
        if(m>p){
             p = m;
        }
    }
    else{
        m = 1;
    }
}
cout<<p;
 return 0;
}