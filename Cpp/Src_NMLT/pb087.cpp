#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m;
    cin >> n >> m;
    bool co = true;
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
            if (a[i][j] != b[i][j])
            {
                co = false;
            }
        }
    }
    if (co)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}