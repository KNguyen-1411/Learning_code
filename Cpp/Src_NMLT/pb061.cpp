#include <bits/stdc++.h>
using namespace std;
void Task()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    if (fopen("test.inp", "r"))
    {
        freopen("test.inp", "r", stdin);
        freopen("test.out", "w", stdout);
    }
}
int main()
{
    Task();
    long long i, j, n, s = 0;
    cin >> n;
    long long a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (j = 0; j < n; j++)
    {
        s += a[j];
    }
    double avg = (double)s / n;
    cout << fixed << setprecision(2) << avg;
    return 0;
}