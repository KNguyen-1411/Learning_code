#include <bits/stdc++.h>
using namespace std;
int A(long long m, long long n)
{
    if (m == 0)
    {
        return 1;
    }
    if (m == n)
    {
        return 1;
    }
    if ((0 < m) && (m < n))
    {
        return A(m - 1, n - 1) + A(m, n - 1);
    }
}
int main()
{
    long long m, n;
    cin >> n >> m;
    cout << A(m, n);
    return 0;
}