#include <bits/stdc++.h>
using namespace std;
double gaithua(int n)
{
    if (n == 1)
        return 1;
    else
        return n * gaithua(n - 1);
}
int main()
{
    double x, tong = 1, so = 1;
    double e = 1e-9;
    cin >> x;
    int n = 1;
    if (x > 0)
    {
        while (abs(so) >= e)
        {
            so = pow(x, n) / gaithua(n);
            tong = tong + so;
            n++;
        }
    }

    cout << fixed << setprecision(4) << tong;
    return 0;
}