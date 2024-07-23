#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a[n];
    bool co = true;
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < a[i - 1])
        {
            co = false;
            break;
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            co = false;
            break;
        }
    }
    if (co)
        cout << "Yes";
    else
    {
        cout << "No";
    }
    return 0;
}