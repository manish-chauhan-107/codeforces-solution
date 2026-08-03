#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n = 0;
    string s;
    cin>>s;
    for (int i = 0 ; i< s.size() ; i++){
        if (isupper(s[i])){
            n = n+1;
        }
        else{
            continue;
        }
    }
    if ((s.size())/2 >= n){
        for(int i=0;i<s.size();i++){
            if(isupper(s[i])){
                s[i]=tolower(s[i]);
            }
        }
    }
    else{
        for(int i=0;i<s.size();i++){
            if(islower(s[i])){
                s[i]=toupper(s[i]);
            }
        }
    }
    
    cout<<s;
    return 0;
}