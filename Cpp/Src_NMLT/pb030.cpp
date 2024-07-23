#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, k, a, b, c, d;
    cin >> m >> n >> k;
    a = m / k;
    b = m % k;
    c = n / k;
    d = n % k;
    if ((b == 0) || (d == 0))
    {
        if (b != 0)
        {
            cout << a + c + 1;
        }
        else if (d != 0)
        {
            cout << a + c + 1;
        }
        else
        {
            cout << a + c;
        }
    }
    else
    {
        cout << a + c + 2;
    }
    return 0;
}