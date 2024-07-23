#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double h = 1.00;
    if (n == 1)
    {
        cout << "1.000000";
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            h += (double)1 / i;
        }
        cout << fixed << setprecision(6) << h;
    }
    return 0;
}