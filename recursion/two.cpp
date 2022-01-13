#include <bits/stdc++.h>
using namespace std;
void print(int n)

{  
    cout << n<<" ";
    if (n == 1)
        return;
    print(n - 1);
}
int main()
{
    print(5);
    return 0;
}
