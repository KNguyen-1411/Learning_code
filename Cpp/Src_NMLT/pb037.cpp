#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int a = 1; a <= 200; a++)
    {
        if (a - n > 0)
        {
            int b = (a * n) / (a - n);
            if (((a * n) % (a - n) == 0) && (b > 0) && (b < 201))
            {
                cout << a << " " << b << endl;
            }
        }
    }
    return 0;
}