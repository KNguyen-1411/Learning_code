#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, y;
    double s = 0;
    cin >> n >> y;
    double a[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (long long j = n - y; j < n; j++)
    {
        s += a[j];
    }
    cout << fixed << setprecision(2) << s;
    return 0;
}