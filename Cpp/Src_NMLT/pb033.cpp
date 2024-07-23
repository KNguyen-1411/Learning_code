#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p, q;
    cin >> n >> p >> q;
    for (int i = 1; i <= n; i++)
    {
        if ((i % p == 0) || (i % q == 0))
        {
            cout << i << " ";
        }
    }
    return 0;
}