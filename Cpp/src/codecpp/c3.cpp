#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    sort(a, a + n);
    while (n--)
    {
        if (a[n] % 2 == 0)
        {
            cout << n;
            return 0;
        }
    }
    cout << "NO";
    return 0;
}