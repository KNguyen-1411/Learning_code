#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long i, n;
    cin >> n;
    double a[n];
    double s = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        s = s + a[i];
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] < 5)
        {
            cout << "D"
                 << " ";
        }
        else
        {
            if (a[i] < 5.5)
            {
                cout << "D+"
                     << " ";
            }
            else
            {
                if (a[i] < 6.5)
                {
                    cout << "C"
                         << " ";
                }
                else
                {
                    if (a[i] < 7)
                    {
                        cout << "C+"
                             << " ";
                    }
                    else
                    {
                        if (a[i] < 8)
                        {
                            cout << "B"
                                 << " ";
                        }
                        else
                        {
                            if (a[i] < 8.5)
                            {
                                cout << "B+"
                                     << " ";
                            }
                            else
                            {
                                cout << "A"
                                     << " ";
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}