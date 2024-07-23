#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    if (((a <= x) && (b <= y)) || ((b <= x) && (a <= y)) || ((a <= x) && (c <= y)) || ((c <= x) && (a <= y)) || ((b <= x) && (c <= y)) || ((c <= x) && (b <= y)))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}