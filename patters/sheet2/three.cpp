#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++){
    int x = 1; 
    for (int j= 1; j <= i;j++) {
        cout<< x<<" "; 
        x=x*(i - j) / j; 
    }
    cout<<endl;
}
    return 0;
}
