#include<bits/stdc++.h>
using namespace std;
#define m
int prime(int i,int n)
{
    if(n==i)
        return 0;
    else
        if(n%i==0)
            return 1;
    else{
        return prime(i+1,n);
    }
}
int main()
{
    int n=15,i;
   for(i=2;i<=n;i++)
    if(prime(2,i)==0)
        cout<<i<<" ";
}