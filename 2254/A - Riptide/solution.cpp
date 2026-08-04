#include <bits/stdc++.h>
using namespace std;
 
int main() {
int t,n,m;
cin>> t;
int a,b,c;
while(t--){
   cin >>a>>b>>c;
    set <int> s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    if (s.size() != 3){
    cout<<"0"<<endl;
    }
    else{
       int arr[3] = {a,b,c};
       sort (arr , arr+3);
       n = arr[2]-arr[1];
       m = arr[1]-arr[0];
       if(n<m){
        cout<<n<<endl;
        }
        else{
            cout<<m<<endl;
        }
    }
}
return 0;
}