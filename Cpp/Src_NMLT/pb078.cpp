#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, dem = 0;
    cin >> n;
    bool co = true;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while (co)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j] % 2 != 0)
            {
                cout << dem;
                return 0;
            }
            else
            {
                a[j] /= 2;
            }
        }
        dem++;
    }
    cout << dem;
    return 0;
}