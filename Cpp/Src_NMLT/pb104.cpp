#include <bits/stdc++.h>
using namespace std;
int main()
{

    string xau;
    while (getline(cin, xau))
    {
        int sotu = 1;
        for (char x : xau)
        {
            if (x >= 'A' && x <= 'Z')
            {
                sotu++;
            }
        }
        cout << sotu << endl;
    }
    return 0;
}
