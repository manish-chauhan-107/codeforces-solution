#include <bits/stdc++.h>
using namespace std;
 
int main() {
 int x ;
 cin>>x;
 int sum = 0;
 int need = 0;
 vector<int> v(x);
 for (int i = 0 ; i < x ; i++){
    cin >> v[i];
    sum = sum + v[i];
 }
 for (int i = 0 ; i < (x) ; i++){
   sort(v.rbegin(), v.rend());
  }
 for (int i = 0 ; i < x ; i++){
    need += v[i];
    if(need > sum / 2)
    {
        cout << i + 1;
        break;
    }
  }
 return 0;
}