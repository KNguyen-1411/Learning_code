#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n * 2 + 1; i++)
    {
        for (int j = 0; j < n * 2 + 1; j++)
        {
            if (i == j || i == 2 * n - j)
            {
                cout << "* ";
            }
            else
            {
                cout << ". ";
            }
        }
        cout << endl;
    }
    return 0;
}