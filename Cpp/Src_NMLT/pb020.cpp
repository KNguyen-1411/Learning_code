#include <bits/stdc++.h>
using namespace std;
int main()
{
    double eps = 1e-9;
    double a, b, c;
    cin >> a >> b >> c;
    cout << fixed << setprecision(9);
    if ((abs(a - b) < eps) || (abs(a - c) < eps) || (abs(b - c) < eps))
    {
        if ((abs(a - b) < eps) && (abs(b - c) < eps))
        {
            cout << "Tam giac deu";
        }
        else
        {
            cout << "Tam giac can";
        }
    }
    else
    {
        cout << "Tam giac thuong";
    }
    return 0;
}
