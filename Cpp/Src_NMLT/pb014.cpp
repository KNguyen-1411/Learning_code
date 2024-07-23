#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a == 0)
    {
        if (b == 0)
        {
            cout << "Many Solutions";
        }
        else
        {
            cout << "No Solution";
        }
    }
    else
    {
        double x = (double)-b / a;
        cout << setprecision(2) << fixed << x;
    }
    return 0;
}