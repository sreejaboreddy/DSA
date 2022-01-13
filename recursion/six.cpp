#include <bits/stdc++.h>
using namespace std;
void series(int n){
 static int x=2;
  cout<<"1/"<<x<<"  ";
  x+=2;
  if(n==2) return;
  series(n-1);
}
int main(){
cout<<1<<" ";
series(5);
return 0;
}