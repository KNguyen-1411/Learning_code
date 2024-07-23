#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c, d, x;
    cin >> a >> b >> c >> d;
    a = a % 100;
    b = b % 100;
    c = c % 100;
    d = d % 100;
    x = a * b * c * d;
    x = x % 100;
    if (x > 9)
    {
        cout << x;
    }
    else if (x < 9)
    {
        cout << "0" << x;
    }
    return 0;
}