#include <iostream>
using namespace std;
void toh(int n, int a, int b, int c)
{
    if (n == 0)
    {
        return;
    }
    toh(n - 1, a, c, b);
    cout << "move disk " << n << " from " << a << " to " << b << endl;
    toh(n - 1, c, b, a);
}
int main()
{
    int n;
    cin >> n;
    toh(n, 1, 3, 2);
}