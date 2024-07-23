#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long n, t = 1, x = 1;
    cin >> n;
    if (n == 0 || n == 1)
    {
        cout << "1";
    }
    else
    {
        if (n % 2 == 1)
        {
            for (unsigned long i = 0; i <= n; i++)
            {
                if (i % 2 == 1)
                {
                    t = t * i;
                }
            }
            cout << t;
        }
        else
        {
            for (unsigned long j = 1; j <= n; j++)
            {
                if (j % 2 == 0)
                {
                    x = x * j;
                }
            }
            cout << x;
        }
    }
    return 0;
}