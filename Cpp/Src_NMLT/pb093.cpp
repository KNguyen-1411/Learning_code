#include <bits/stdc++.h>
using namespace std;
long long tong(int x, int n)
{
    long long tong = 0;
    for (long long i = 0; i <= n; i += 2)
    {
        tong += pow(x, i);
    }
    return tong - 1;
}
int main()
{
    long long n, x;
    cin >> x >> n;
    cout << tong(x, n);
    return 0;
}