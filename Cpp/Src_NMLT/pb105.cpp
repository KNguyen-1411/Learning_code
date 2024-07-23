#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while (getline(cin, str))
    {
        int hoa = 0, thuong = 0;  // ss
        int dodai = str.length(); // do dai
        for (int i = 0; i < dodai; i++)
        {
            if (isupper(str[i]))
            {
                hoa++;
            }
            else
            {
                thuong++;
            }
        }
        if (hoa > thuong)
        {
            for (int i = 0; i < dodai; i++)
            {
                if (str[i] >= 'a' && str[i] <= 'z')
                { // neu la chu thuong thi viet hoa
                    str[i] = str[i] - 32;
                }
            }
            cout << str << endl;
        }
        else
        {
            for (int i = 0; i < dodai; i++)
            {
                if (str[i] >= 'A' && str[i] <= 'Z')
                {
                    str[i] = str[i] + 32;
                }
            }
            cout << str << endl;
        }
    }
    return 0;
}
