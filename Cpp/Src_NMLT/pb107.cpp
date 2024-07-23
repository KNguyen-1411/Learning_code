#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    cin.ignore(1);
    for (int i = 0; i < n; i++)
    {
        string str, kq = "";
        getline(cin, str);
        for (char ch : str)
        {
            if (ch == ' ')
                kq += "%20";
            else if (ch == '!')
                kq += "%21";
            else if (ch == '$')
                kq += "%24";
            else if (ch == '%')
                kq += "%25";
            else if (ch == '(')
                kq += "%28";
            else if (ch == ')')
                kq += "%29";
            else if (ch == '*')
                kq += "%2a";
            else
                kq += ch;
        }
        cout << "Case #" << i + 1 << ": " << kq << endl;
    }
}