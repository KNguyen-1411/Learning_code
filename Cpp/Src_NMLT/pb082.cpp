#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int min[n], max[m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        min[i] = a[i][0];
    }
    for (int j = 0; j < m; j++)
    {
        max[j] = a[0][j];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (min[i] >= a[i][j])
            {
                min[i] = a[i][j];
            }
            if (max[j] <= a[i][j])
            {
                max[j] = a[i][j];
            }
        }
    }
    bool co = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (min[i] == a[i][j] && max[j] == a[i][j])
            {
                co = true;
            }
        }
    }
    if (co)
    {
        cout << "Cac phan tu yen ngua la:" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (min[i] == a[i][j] && max[j] == a[i][j])
                {
                    cout << "(" << i + 1 << "," << j + 1 << "); ";
                }
            }
        }
    }
    else
    {
        cout << "Khong co phan tu yen ngua";
    }
    return 0;
}