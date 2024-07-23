#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, dem1 = 0, dem2 = 0;
    cin >> n;
    vector<int> b;
    vector<int> c;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            k = a[i];
            b.push_back(k);
            dem1++;
        }
        else
        {
            k = a[i];
            c.push_back(k);
            dem2++;
        }
    }
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    for (int i = 0; i < dem1; i++)
    {
        cout << b[i] << " ";
    }
    for (int i = 0; i < dem2; i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}
