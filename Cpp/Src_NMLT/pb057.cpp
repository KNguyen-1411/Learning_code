#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long k, n, s = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        if ((k % 2 == 0) || ((k < 0) && (k % 3 == 0)))
        {
            s++;
        }
    }
    cout << s;
    return 0;
}