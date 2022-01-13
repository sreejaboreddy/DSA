#include <bits/stdc++.h>
using namespace std;
int main(){
int n ,x ;
cin >>n;
for(int i =1;i<=n;i++){
    x=1;
    for(int j =1;j<=n;j++){
        if(i==j||(i+j)==n||j==1||j==n)cout<<x;
        else cout<<" ";
        x++;
    }
    cout<<endl;
}
return 0;
}

 