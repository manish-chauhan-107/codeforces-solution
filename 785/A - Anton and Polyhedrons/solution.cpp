#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
int n;
cin>>n;
int ans = 0;
string s;
while(n--){
    cin>>s;
    if (s == "Cube"){
        ans = ans + 6;
    }
    else if (s == "Tetrahedron"){
        ans = ans + 4;
    }
     else if (s == "Octahedron"){
        ans = ans + 8;
    }
     else if (s == "Dodecahedron"){
        ans = ans + 12;
    }
     else if (s == "Icosahedron"){
        ans = ans + 20;
    }
    else{
        ans = ans;
    }
}
cout<<ans;
 return 0;
}