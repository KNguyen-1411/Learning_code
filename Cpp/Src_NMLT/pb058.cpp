#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long a[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long min = a[0], max = a[0], smin = 0, smax = 0;
    for (long long i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            smin = i;
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (max < a[j])
        {
            max = a[j];
            smax = j;
        }
    }
    cout << abs(smax - smin);
    return 0;
}