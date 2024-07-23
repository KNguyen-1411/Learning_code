#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m;
    cin >> n >> m;
    int a[n][m], b[n][m];
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
            cin >> b[i][j];
        }
    }
    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < m; j++)
        {
            a[i][j] += b[i][j];
        }
    }
    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}