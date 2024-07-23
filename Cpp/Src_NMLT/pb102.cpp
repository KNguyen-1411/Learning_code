#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while (getline(cin, str))
    {
        int dem = 0;
        for (char na : str)
        {
            if (na == 'a' || na == 'o' || na == 'y' || na == 'i' || na == 'e' || na == 'u' || na == 'A' || na == 'O' || na == 'Y' || na == 'I' || na == 'E' || na == 'U')
            {
                dem++;
            }
        }
        cout << dem << endl;
    }
    return 0;
}