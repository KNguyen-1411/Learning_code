#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a;
    vector<int> b;
    int n;
    int s = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        a.push_back(v);
    }
    for (int j = 0; j < n; j++)
    {
        int z;
        cin >> z;
        b.push_back(z);
    }
    for (int k = 0; k < n; k++)
    {
        s = s + (a[k] * b[k]);
    }
    if (s == 0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}
