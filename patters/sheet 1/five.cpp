#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=n-i;j>0;j--)
     cout<<" ";
    for(int k=0;k<i;k++)
     cout<<"*"<<" ";
    cout<<endl;
}
for(int i=0;i<=n;i++){
    for(int m=0;m<=i;m++)
     cout<<" ";
    for(int l=n-i-1;l>0;l--)
     cout<<"*"<<" ";
    cout<<endl;
}
return 0;
}