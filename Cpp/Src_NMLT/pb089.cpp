#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m, dem = 0;
    cin >> n >> m;
    double t = (double)(m * n) / 2;
    int a[n][m];
    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 0)
            {
                dem++;
            }
        }
    }
    if (dem >= t)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}
