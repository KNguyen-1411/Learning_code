#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c, s;
    cin >> a >> b >> c;
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        s = (sqrt((a + b + c) * (a + b - c) * (b + c - a) * (c + a - b))) / 4;
        cout << fixed << setprecision(4) << s;
    }
    else
    {
        cout << "No Solution";
    }
    return 0;
}