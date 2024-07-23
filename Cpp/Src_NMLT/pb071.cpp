#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < x; i++)
    {
        cout << a[i] << " ";
    }
    for (int j = n - y; j < n; j++)
    {
        cout << a[j] << " ";
    }
    return 0;
}