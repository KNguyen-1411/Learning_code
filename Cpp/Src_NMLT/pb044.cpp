#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string a;
    while (n > 0)
    {
        int s = n % 16;
        if (s < 10)
        {
            a = char(s + 48) + a;
        }
        else
        {
            a = char(s + 55) + a;
        }
        n /= 16;
    }
    cout << a;
    return 0;
}