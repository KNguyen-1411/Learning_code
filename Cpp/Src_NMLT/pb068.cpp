#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long i, n, z = 0, x = 0;
    cin >> n;
    double a[n], b[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] > b[i])
        {
            z += 1;
        }
        else if (a[i] < b[i])
        {
            x += 1;
        }
    }
    cout << z << " " << x;

    return 0;
}