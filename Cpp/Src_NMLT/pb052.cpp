#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, d = 0;
    cin >> a >> b >> c;
    while (a < c)
    {
        a = a + ((a * b) / 100);
        d++;
    }
    cout << d;
    return 0;
}