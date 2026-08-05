#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int ans;
    int a;
    cin>>a;
    if(a%5 == 0){
        ans = (a/5);
    }
    else{
        ans = ((a/5) + 1 );
    }
    cout<<ans;
    return 0;
}