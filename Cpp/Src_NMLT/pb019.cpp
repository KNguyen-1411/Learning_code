#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((a == b) || (a == c) || (b == c))
    {
        if ((a == b) && (b == c))
        {
            cout << "Tam giac deu";
        }
        else
        {
            cout << "Tam giac can";
        }
    }
    else
    {
        cout << "Tam giac thuong";
    }
    return 0;
}
