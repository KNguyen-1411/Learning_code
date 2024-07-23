#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cin >> b[i];
    }
    int maxa = a[0], vt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= maxa)
        {
            maxa = a[i];
            vt = i;
        }
    }
    int maxb = 0;
    for (int i = 0; i < n; i++)
    {
        if ((b[i] > maxb) && (i != vt))
        {
            maxb = b[i];
        }
    }
    cout << maxa + maxb;
    return 0;
}