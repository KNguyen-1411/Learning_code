#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k = 1;
    cin >> n;
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else if ((n % 2 == 1) && (n != 1))
        {
            n = 3 * n + 1;
        }
        k++;
    }
    cout << k;
    return 0;
}