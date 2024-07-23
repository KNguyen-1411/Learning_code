#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i = 2;
    cin >> n;
    while ((n != 1) && (i <= sqrt(n)))
    {
        if (n % i == 0)
        {
            cout << i << " ";
            n /= i;
        }
        else
        {
            i++;
        }
    }
    if (n > 1)
    {
        cout << n << " ";
    }

    return 0;
}