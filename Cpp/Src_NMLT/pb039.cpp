#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, a, b;
    cin >> m >> n;
    b = (float)(n - 2 * m) / 2;
    a = (float)m - b;
    if (((n - 2 * m) % 2 == 0) && (b != 0))
    {
        cout << "Ga = " << a << endl;
        cout << "Cho = " << b;
    }
    else
    {
        cout << "-1";
    }
    return 0;
}