#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n = 0 ;
    string s;
    cin>>s;
    for(int i = 0 ; i < s.size()-1 ; i++){
        if (s[i] == s[i+1]){
            n++;
            if(n >= 6){
                break;
            }
            else{
                continue;
            }
        }
        else{
            n = 0;
        }
        }
    if( n >= 6){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}