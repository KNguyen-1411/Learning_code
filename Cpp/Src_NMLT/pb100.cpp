#include <bits/stdc++.h>
using namespace std;
int A(long long n)
{
    if (n <= 100)
        return A(A(n + 11));
    else
        return n - 10;
}
int main()
{
    long long n;
    cin >> n;
    cout << A(n);
    return 0;
}