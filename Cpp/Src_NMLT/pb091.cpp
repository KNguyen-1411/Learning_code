#include <bits/stdc++.h>
using namespace std;
int am(int n)
{
    int so, tong = 0, mu = 0;
    int k = n;
    int l = n;
    while (k != 0)
    {
        k = k / 10;
        mu++;
    }
    while (n != 0)
    {
        so = n % 10;
        tong += pow(so, mu);
        n /= 10;
    }

    if (tong == l)
        return 1;
    else
        return 0;
}

int main()
{
    int n, s = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        int k = a[i];
        s += am(k);
    }
    cout << s;
    return 0;
}