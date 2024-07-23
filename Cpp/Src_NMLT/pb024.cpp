#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x;
    cin >> x;
    cout << fixed << setprecision(10);
    if ((x <= 100) && (x >= 0))
    {
        if (x > 75)
        {
            cout << "Interval (75,100]";
        }
        else if (x > 50)
        {
            cout << "Interval (50,75]";
        }
        else if (x > 25)
        {
            cout << "Interval (25,50]";
        }
        else
        {
            cout << "Interval [0,25]";
        }
    }
    else
    {
        cout << "Out of Intervals";
    }
    return 0;
}