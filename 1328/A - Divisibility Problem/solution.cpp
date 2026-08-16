#include <iostream>
using namespace std;
int main() {
    int n;
    int a , b ;
    cin >> n;
    while(n--){
      cin>>a>>b;
      if(a <= b ){
        cout<<abs(a-b)<<endl;
      }
      else{
        if(a%b!=0){
             int m = a/b;
             int k = m+1;
             cout<<abs(a-(k*b))<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
      }
    }    
    return 0;
}