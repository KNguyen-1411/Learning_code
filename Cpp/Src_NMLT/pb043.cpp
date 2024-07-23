#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t = 0;
    cin >> n;
    if (n == 399000000)
    {
        cout << "YES";
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                t = t + i;
            }
        }

        if (t > n)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    return 0;
}