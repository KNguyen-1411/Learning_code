#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, i;
    cin >> n;
    long long a[n], s = 0, m;
    cin >> a[0];
    m = a[0];
    for (i = 1; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > m)
        {
            s += m;
            m = a[i];
        }
        else if (a[i] == m)
        {
            m = a[i];
        }
        else
        {
            s = s + a[i];
        }
    }
    cout << s;
    return 0;
}