#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p, s;
    cin >> n >> p;
    if (n % (p * 4) > 0)
    {
        s = (n / (p * 4)) + 1;
        cout << s;
    }
    else
    {
        s = (n / (p * 4));
        cout << s;
    }
    return 0;
}
