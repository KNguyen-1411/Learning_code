#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long i, j, n;
    cin >> n;
    long long a[n], s = 0;
    double z;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (j = 0; j < n; j++)
    {
        z = (double)sqrt(a[j]);
        if (z == (long long)z)
        {
            s = s + 1;
        }
    }
    cout << s;
    return 0;
}
