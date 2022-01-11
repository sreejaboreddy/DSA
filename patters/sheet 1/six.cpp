#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int x=1;
for(int i=1;i<=n;i++){
    for(int j=n-i;j>0;j--)
     cout<<" ";
    for(int k=0;k<x;k++){
     cout<<x;
     x--;
    }
    for(;x>0;x--)
        cout<<x;
    x=i*3-i+1;
    cout<<endl;
}
return 0;
}