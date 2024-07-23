#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], am = 0, duong = 0, chan = 0, le = 0;
    for (int j = 0; j < n; j++)
    {
        cin >> a[j];
        if (a[j] < 0)
        {
            am++;
        }
        if (a[j] > 0)
        {
            duong++;
        }
        if (a[j] % 2 == 0)
        {
            chan++;
        }
        else
        {
            le++;
        }
    }
    cout << am << "\n"
         << duong << "\n"
         << chan << "\n"
         << le;
    return 0;
}