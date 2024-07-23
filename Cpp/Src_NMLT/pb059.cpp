#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> b = a;
    sort(b.begin(), b.end(), greater<int>());
    map<int, int> r;
    int c = 1;
    for (int i = 0; i < n; i++)
    {
        if (r.find(b[i]) == r.end())
        {
            r[b[i]] = c;
        }
        c++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << r[a[i]] << endl;
    }
    return EXIT_SUCCESS;
}