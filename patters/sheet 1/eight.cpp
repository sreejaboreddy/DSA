#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int x=1;
for(int i=1;i<=n;i++){
    for(int j=n-i;j>0;j--)
     cout<<" ";
     cout<<x;
     for(int k=0;k<i-1;k++)
     cout<<"  ";
     cout<<x;
     x++;
    cout<<endl;
}
x=n-1;
for(int i=0;i<n-1;i++){
    for(int m=1;m<=i;m++)
     cout<<" ";
     cout<<x;
    for(int l=n-i-1;l>0;l--)
     cout<<"  ";
     cout<<x;
     x--;
    cout<<endl;
}
return 0;
}