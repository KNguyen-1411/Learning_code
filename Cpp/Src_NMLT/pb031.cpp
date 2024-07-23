#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a, b, c, d, x, n;
    cin >> n;
    while (n--)
    {
        cin >> a >> b >> c >> d >> x;
        if (((a == b) && (b == c) && (c == d)) || ((a + x == b) && (b == c) && (c == d)) || ((a == c) && (b + x == c) && (c == d)) || ((a == b) && (c + x == b) && (b == d)) || ((a == b) && (b == c) && (d + x == c)))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}