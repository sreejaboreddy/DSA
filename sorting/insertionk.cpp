#include <bits/stdc++.h>
using namespace std;
int main(){
int n,temp,i,j,k,c=0;
cout<<"enter the limit of an array and elements";
cin>>n;
int a[n];
for(int i =0 ;i<n;i++)
cin>>a[i];
cout<<"enter k";
cin>>k;
for(i=1;i<n;i++){
    temp=a[i];
    j=i-1;
    while(j>=0 && a[j]>temp)
    {
        a[j+1]=a[j];
        j--;
        c++;
        if(k==c)break;
    }
  a[j+1]=temp;
}

for(int i =0 ;i<n;i++)
cout<<a[i]<<" ";
return 0;
}