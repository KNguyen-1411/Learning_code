#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b;
    double esp = 1e-9;
    cin >> a >> b;
    if ((abs(a - 0) < esp) || (abs(b - 0) < esp))
    {
        if ((abs(a - 0) < esp) && (abs(b - 0) < esp))
        {
            cout << "Origem";
        }
        else if ((abs(a - 0) < esp))
        {
            cout << "Eixo Y";
        }
        else if ((abs(b - 0) < esp))
        {
            cout << "Eixo X";
        }
    }
    else
    {
        if (a > 0)
        {
            if (b > 0)
            {
                cout << "Q1";
            }
            else
            {
                cout << "Q4";
            }
        }
        else if (a < 0)
        {
            if (b > 0)
            {
                cout << "Q2";
            }
            else
            {
                cout << "Q3";
            }
        }
    }
    return 0;
}