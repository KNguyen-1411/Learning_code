#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m;
    cin >> n >> m;
    int a[n][m];
    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (long long i = 0; i < m; i++)
    {
        long long s = 0;
        for (long long j = 0; j < n; j++)
        {
            s += a[j][i];
        }
        cout << s << " ";
    }
    return 0;
}