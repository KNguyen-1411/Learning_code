#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    bool co = true;
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
            if (i != j && a[i][j] != 0)
            {
                co = false;
                break;
            }
            if (i == j && a[i][j] != 1)
            {
                co = false;
                break;
            }
        }
        if (!co)
        {
            break;
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
