#include <bits/stdc++.h>
#define x 51
using namespace std;
int main()
{
    char a;
    cin >> a;
    int n, m[x];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m[i]; j++)
        {
            cout << a;
        }
        cout << endl;
    }
    return 0;
}