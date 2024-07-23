#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x;
    cin >> x;
    if ((x >= 100 && x <= 999) || x % 2 != 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}