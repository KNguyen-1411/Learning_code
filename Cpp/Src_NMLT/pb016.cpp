#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c, dl, x1, x2;
    cin >> a >> b >> c;
    dl = b * b - 4 * a * c;
    if (dl > 0)
    {
        x1 = (-b + sqrt(dl)) / (2 * a);
        x2 = (-b - sqrt(dl)) / (2 * a);
        cout << fixed << setprecision(4) << x1 << "\n"
             << x2 << endl;
    }
    else if (dl == 0)
    {
        x1 = -b / (2 * a);
        cout << fixed << setprecision(4) << x1 << endl;
    }
    else
    {
        cout << "No Solution";
    }
    return 0;
}