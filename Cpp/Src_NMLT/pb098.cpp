#include <bits/stdc++.h>
using namespace std;
int fn(long long a, long long b, long long c, long long n)
{
    if (n == 0)
    {
        return a;
    }
    else
    {
        return fn(a, b, c, n - 1) + b * n + c;
    }
}
int main()
{
    long long a, b, c, n;
    cin >> a >> b >> c >> n;
    int x = fn(a, b, c, n);
    cout << x;
    return 0;
}