#include <bits/stdc++.h>
using namespace std;
int main(){
 int n;
 int x;
 cin>>n;
 for(int i=0;i<=n;i++){
     x=n;
     for(int j=0;j<i;j++){
        cout<<x;
        x--;
     }
    cout<<endl;
 }
 for(int i=1;i<n;i++){
     x=n;
    for(int k=n-i;k>0;k--){
         cout<<x;
         x--;
     }
     cout<<endl;
 }

return 0;
}