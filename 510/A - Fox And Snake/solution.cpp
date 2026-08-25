#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
int n,m;
cin>>n>>m;
for(int i = 1 ; i <= n ; i++){
    if (i % 2 != 0 ){
        for (int j = 0 ; j < m ; j++)
        cout<<"#";
    }
    else if (i%4 == 0){
        for (int j = 0 ; j < m ; j++){
            if (j == 0){
                cout<<"#";
            }
            else{
                cout<<".";
            }
    }
    }
    else if (i%2 == 0 && i%4 != 0){
          for (int j = 1 ; j <= m ; j++){
            if (j == m ){
                cout<<"#";
            }
            else{
                cout<<".";
            }
    }
    }
    cout<<"
";
}
 return 0;
}