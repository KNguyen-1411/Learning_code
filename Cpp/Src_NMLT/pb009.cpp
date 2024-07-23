#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c, d;
    double e;
    cin >> a >> b >> c >> d;
    e = (double)sqrt((c - a) * (c - a) + (d - b) * (d - b));
    cout << fixed << setprecision(9) << e;
    return 0;
}