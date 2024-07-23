#include <bits/stdc++.h>
using namespace std;
bool kt(int n)
{
    if (n < 0)
    {
        return false;
    }
    int sqrtN = sqrt(n);
    return (sqrtN * sqrtN == n);
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ma = a[0], mi = a[0];
    bool co1 = false, co2 = false;
    for (int i = 0; i < n; i++)
    {
        if (kt(a[i]))
        {
            if (!co1)
            {
                co1 = true;
            }
            else
            {
                co2 = true;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (kt(a[i]))
        {
            if (a[i] > ma)
            {
                ma = a[i];
            }
            if (a[i] < mi)
            {
                mi = a[i];
            }
        }
    }
    if (co1 && co2)
    {
        cout << abs(mi - ma);
    }
    else
    {
        cout << "NO";
    }

    return 0;
}