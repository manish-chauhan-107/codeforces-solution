#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long  a ;
    int n  = 0;
    vector<int> s;
    cin>>a;
     while (a > 0){
           s.push_back(a%10);
           a = a/10;
        }
    for(int i = 0 ; i <s.size(); i++){
        if(s[i] == 7 || s[i] == 4){
            n = n+1;
        }
    }
    if( n == 7 || n == 4 ){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
 
    return 0;
}