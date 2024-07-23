#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> c;
    vector<int> d;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int l = k;
    for (int i = 0; i < k; i++)
    {
        if (l != 0)
        {
            c.push_back(a[n - l]);
            l = l - 1;
        }
    }
    for (int i = 0; i < n - k; i++)
    {
        c.push_back(a[i]);
    }
    for (int i = k; i < n; i++)
    {
        d.push_back(b[i]);
    }
    for (int i = 0; i < k; i++)
    {
        d.push_back(b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << c[i] + d[i] << " ";
    }
    return 0;
}
