#include <bits/stdc++.h>
using namespace std;
int main(){
int n,c=0,k;
cout<<"enter the limit of an array and elements";
cin>>n;
int a[n];
for(int i =0 ;i<n;i++)
cin>>a[i];
cout<<"enter k";
cin>>k;
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(c==k)break;
        c++;
        if(a[j]>a[j+1]){
           int temp = a[j];
           a[j]=a[j+1];
           a[j+1]=temp; 
        }
    }
}
for(int i =0 ;i<n;i++)
cout<<a[i]<<" ";
return 0;
}