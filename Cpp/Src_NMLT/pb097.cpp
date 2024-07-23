#include <bits/stdc++.h>
using namespace std;
long long fn(long long n)
{
    if (n == 0)
        return 0;
    else
        return fn(n - 1) + n;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin >> n;
    cout << fn(n);
    return 0;
}