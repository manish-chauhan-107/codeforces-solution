#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int ans;
    int a,b;
    cin>>a>>b;
    if(a%2 == 0){
        ans = (a/2)*b;
    }
    else{
        ans = ((a/2)*b + (b/2));
    }
    cout<<ans;
    return 0;
}