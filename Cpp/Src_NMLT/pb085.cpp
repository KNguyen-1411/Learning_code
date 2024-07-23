#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int k, m, n;
    long long s = 0;
    cin >> k >> n >> m;
    int a[k][n], b[n][m];
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int z = 0; z < n; z++)
            {
                s += a[i][z] * b[z][j];
            }
            cout << s << " ";
            s = 0;
        }
        cout << endl;
    }
    return 0;
}