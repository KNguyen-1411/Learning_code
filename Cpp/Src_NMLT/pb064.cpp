#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, c, b;
    cin >> n;
    double a[n];
    double s = 0, t = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        s = s + a[i];
    }
    s = (double)s / n;
    sort(a, a + n);
    for (i = 0; i < n; i++)
    {
        if (n % 2 == 0)
        {
            c = (double)n / 2 + 0.5;
            b = c - 1;
            t = (a[c] + a[b]) / 2;
        }
        else
        {
            t = a[n / 2];
        }
    }
    cout << fixed << setprecision(6) << s << endl
         << t;
    return 0;
}