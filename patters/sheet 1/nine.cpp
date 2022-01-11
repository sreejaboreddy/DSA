#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
char x = 'A'+n;
for(int i=0;i<=n;i++){
    for(int j =0;j<i;j++)
    cout<<" ";
    cout<<x;
    for(int l=n-i;l>0;l--)
     cout<<"  ";
    cout<<x;
    x--;
    cout<<endl;
}
return 0;
}