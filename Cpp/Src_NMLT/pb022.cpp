#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    if (x % 2 == 0)
    {
        if ((x < 0) && (x % -3 == 0))
        {
            cout << "No";
        }
        else
        {
            cout << "Yes";
        }
    }
    else if ((x < 0) && (x % -3 == 0))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}