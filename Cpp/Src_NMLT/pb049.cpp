#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long so;
    long long soTemp;
    long long tong = 0;
    ;
    cin >> so;
    soTemp = so;
    if (so > 10)
    {
        while (soTemp != 0)
        {
            tong += soTemp % 10;
            soTemp /= 10;
        }
        if (so % tong == 0)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
    }
    else if (so != 0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}