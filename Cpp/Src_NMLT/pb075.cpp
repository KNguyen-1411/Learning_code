#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] >= x)
        {
            cout << i;
            return 0;
        }
        else if (x > a[n])
        {
            cout << n + 1;
            return 0;
        }
        else if (x < a[1])
        {
            cout << "1";
            return 0;
        }
    }
}