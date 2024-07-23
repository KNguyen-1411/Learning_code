#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, d, pi, s;
    pi = 3.14159;
    cin >> a >> b >> d;
    d = (d * pi / 180);
    s = 0.5 * a * b * sin(d);
    cout << fixed << setprecision(2) << s;
    return 0;
}