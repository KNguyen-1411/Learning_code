#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long k, n, s = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        s += k;
    }
    cout << s;
    return 0;
}