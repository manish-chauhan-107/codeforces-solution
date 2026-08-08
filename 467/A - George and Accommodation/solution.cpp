#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int a ;
  cin>>a;
  int n = 0;
  while(a--){
    pair<int , int> data ;
    cin>>data.first;
    cin>>data.second;
    if(data.second - data.first >= 2){
      n++;
    }
  }
  cout<<n<<endl;
 return 0;
}