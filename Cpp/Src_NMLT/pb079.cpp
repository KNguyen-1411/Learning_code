#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m, s1 = 0;
    cin >> n >> m;
    int a[n][m];
    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < m; j++)
        {
            s1 += a[i][j];
        }
        cout << s1 << " ";
        s1 = 0;
    }
    return 0;
}