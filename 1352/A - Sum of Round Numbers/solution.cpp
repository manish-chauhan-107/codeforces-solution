#include <bits/stdc++.h>
using namespace std;
 
int main() {
int n;
 int t;
 cin>>t;
 while(t--){
    cin>>n;
   vector<int> v;
    int a = (n/10000)*10000;
    int b = ((n%10000)/1000)*1000;
    int c = (((n%10000)%1000)/100)*100;
    int d = ((((n%10000)%1000)%100)/10)*10;
    int e = (((((n%10000)%1000)%100)%10));
    if (a != 0){
      v.push_back(a);
    }
    if (b != 0){
      v.push_back(b);
    }
    if (c != 0){
      v.push_back(c);
    }
    if (d != 0){
      v.push_back(d);
    }
    if (e != 0){
      v.push_back(e);
    }
    cout<<v.size()<<endl;
    for(int i = 0 ; i < v.size() ; i++){
      cout<<v[i]<<" ";
    }
    cout<<endl;
 }
 return 0;
}