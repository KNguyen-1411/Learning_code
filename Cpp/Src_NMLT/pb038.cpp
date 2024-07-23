#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, x = 0;
    cin >> n;
    if (n == 1)
    {
        cout << "No";
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                x = x + 1;
            }
        }
        if (x == 0)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }

        return 0;
    }
}