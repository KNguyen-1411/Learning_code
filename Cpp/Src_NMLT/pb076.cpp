#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (x < a[1])
        {
            cout << "1";
            return 0;
        }
        else if ((a[i] <= x) && (a[i + 1] > x))
        {
            cout << i + 1;
            return 0;
        }
        else if (x > a[n])
        {
            cout << n + 1;
            return 0;
        }
    }
}