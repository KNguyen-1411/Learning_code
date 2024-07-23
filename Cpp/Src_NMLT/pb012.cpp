#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    long long a;
    cin >> x;
    if (x > 3)
    {
        a = pow(x, 3) + 2 * x * x + 5 * x;
        cout << a;
    }
    else if (x < 1)
    {
        a = 5 * x - 8;
        cout << a;
    }
    else
    {
        a = x * x - 2 * x + 4;
        cout << a;
    }
    return 0;
}