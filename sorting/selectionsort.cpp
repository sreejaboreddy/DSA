#include <bits/stdc++.h>
using namespace std;
int main(){
int n, i , j , m;
cin>>n;
int a[n];
for(int i =0 ;i<n;i++)
cin>>a[i];
for(int i=0;i<n;i++){
    m=i;
    for(int j=i+1;j<n;j++){
        if(a[j]<a[m])
        m=j;
    }
    int temp = a[m];
    a[m]=a[i];
    a[i]=temp;
}
for(int i =0 ;i<n;i++)
cout<<a[i]<<" ";
return 0;
}