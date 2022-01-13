#include <bits/stdc++.h>
using namespace std;
void series(int n){
 static int x=1;
  cout<<"1/"<<x<<"  ";
  x+=2;
  if(n==1) return;
  series(n-1);
}
int main(){
series(5);
return 0;
}