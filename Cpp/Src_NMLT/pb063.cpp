#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < 101 and a[i] > 0)
        {
            if ((a[i] == 4) || (a[i] == 7) || (a[i] == 16) || (a[i] == 28) || (a[i] == 44) || (a[i] == 49) || (a[i] == 64) || (a[i] == 74) || (a[i] == 77) || (a[i] == 47))
            {
                k++;
            }
        }
    }
    cout << k;
    return 0;
}