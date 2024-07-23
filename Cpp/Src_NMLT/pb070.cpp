#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef long double lf;
template <typename T>
using ordered_set = tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>;
// top 1 fifai kn
using namespace std;
int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int n;
    cin >> n;
    int a[n];
    for (long int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (long int i = 1; i < n - 1; i++)
    {
        if (a[i] >= a[i - 1] && a[i] <= a[i + 1])
        {
            cout << "No" << endl;
            return 0;
        }
        else if (a[i] <= a[i - 1] && a[i] >= a[i + 1])
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
    return 0;
}