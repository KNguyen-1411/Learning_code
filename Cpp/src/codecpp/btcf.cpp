#include <bits/stdc++.h>
#define ll long long
using namespace std;
int kt(ll n)
{
    if (n == 10)
        return 1;
    else if (n == 10)
        return -1;
    else 
        return n;
}
inline ll duoi(ll n)
{
    n %= 10;
    return n;
}
inline ll dau(ll n)
{
    while (n >= 10)
    {
        n /= 10;
    }
    return n;
}
inline ll dem(ll n)
{
    int dem = 0;
    while (n >= 10)
    {
        n /= 10;
        dem++;
    }
    return dem;
}
inline ll doiduoi(ll n, ll dau, ll duoi)
{
    n -= duoi;
    n += dau;
    return n;
}
inline ll doidau(ll dau, ll duoi, ll dem, ll doiduoi)
{
    ll kq = 0;
    kq = doiduoi - (dau * (pow(10, (dem))));
    kq += (duoi * (pow(10, (dem))));
    return kq;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin >> n;
    if (abs(n) <= 10)
    {
        cout << kt(n);
    }
    else
    {
        if (n > 0)
        {
            cout << doidau(dau(n), duoi(n), dem(n), doiduoi(n, dau(n), duoi(n)));
        }
        else
        {
            n = -n;
            cout << -doidau(dau(n), duoi(n), dem(n), doiduoi(n, dau(n), duoi(n)));
        }
    }
}