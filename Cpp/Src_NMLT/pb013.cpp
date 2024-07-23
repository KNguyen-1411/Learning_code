#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, x;
    cin >> x;
    if (x > 0)
    {
        a = pow(x, 2) + sqrt(x) + 1;
        cout << fixed << setprecision(6) << a;
    }
    else if (x == -3)
    {
        cout << "Div by zero";
    }
    else
    {
        a = (pow(x, 3) + 2 * x + 1) / (x + 3);
        cout << fixed << setprecision(6) << a;
    }
    return 0;
}
