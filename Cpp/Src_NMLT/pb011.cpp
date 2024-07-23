#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    long long y;
    cin >> x;
    if (x < 10)
    {
        y = 1ll * x * x - 2 * x + 4;
        cout << y;
    }
    else
    {
        y = 1ll * x * x * x + x * 5;
        cout << y;
    }
    return 0;
}