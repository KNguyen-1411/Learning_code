#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (c > b)
    {
        cout << "-1";
    }
    else
    {
        if (a == c)
        {
            if (d == b)
            {
                cout << a << " " << b;
            }
            else if (b > d)
            {
                cout << a << " " << d;
            }
            else if (b < d)
            {
                cout << a << " " << b;
            }
        }
        else if (a < c)
        {
            if (d == b)
            {
                cout << c << " " << b;
            }
            else if (b > d)
            {
                cout << c << " " << d;
            }
            else if (b < d)
            {
                cout << c << " " << b;
            }
        }
        else if (a > c)
        {
            if (d == b)
            {
                cout << a << " " << b;
            }
            else if (b > d)
            {
                cout << a << " " << d;
            }
            else if (b < d)
            {
                cout << a << " " << b;
            }
        }
    }
    return 0;
}