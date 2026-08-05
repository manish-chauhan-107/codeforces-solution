#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    int k = 0;
    int l = 0;
    int m = 0;
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    for (int i =0 ; i < s1.size() ; i++){
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);
        if ( s1[i] != s2[i] ){
            if (int(s1[i]) > int(s2[i])){
                k=1;
                break;
            }
            else if (int(s1[i]) < int(s2[i])){
                l=1;
                break;
            }
        }
        else{
            m=1;
        }                                                                                               
    } 
     if (k == 1){
          cout<<"1";
     }           
     else if (l == 1){
          cout<<"-1";
     }            
     else{
          cout<<"0";
        }     
    return 0;
}