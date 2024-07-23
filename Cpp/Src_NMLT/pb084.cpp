#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, s = 0;
    cin >> n;
    int a[n][n];
    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < n; j++)
        {
            if ((i == j) || (i == n - 1 - j))
            {
                s += a[i][j];
            }
        }
    }
    cout << s;
    return 0;
}