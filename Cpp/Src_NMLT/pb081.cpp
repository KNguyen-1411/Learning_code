#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m;
    cin >> n >> m;
    int a[n][m];
    int b[m][n];
    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (long long i = 0; i < m; i++)
    {
        for (long long j = 0; j < n; j++)
        {
            b[i][j] = a[j][i];
        }
    }
    for (long long i = 0; i < m; i++)
    {
        for (long long j = 0; j < n; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}