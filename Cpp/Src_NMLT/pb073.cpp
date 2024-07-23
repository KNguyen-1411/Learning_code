#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    m = n;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[n - i - 1] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}