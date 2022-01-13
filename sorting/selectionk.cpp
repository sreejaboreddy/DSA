#include <bits/stdc++.h>
using namespace std;
int main(){
int n, i , j , m,k,c=0;
cout<<"enter the limit of array and elements";
cin>>n;
int a[n];
for(int i =0 ;i<n;i++)
cin>>a[i];
cout<<"enter the kth iteration";
cin>>k;
for(int i=0;i<n;i++){
    m=i;
    for(int j=i+1;j<n;j++){
        if(a[j]<a[m])
        m=j;
        c++;
    }
    int temp = a[m];
    a[m]=a[i];
    a[i]=temp;
    if(k==c)break;
}
for(int i =0 ;i<n;i++)
cout<<a[i]<<" ";
return 0;
}