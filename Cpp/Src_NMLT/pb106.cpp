#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string str;
    while (true)
    {
        getline(cin, str);
        if (str == "#")
            break;
        int s = 0;
        size_t n = str.length();
        for (int i = 0; i < n; i++)
        {
            str[i] = toupper(str[i]);
            if (str[i] == ' ')
                continue;
            int val = (str[i] - 'A' + 1) * (i + 1);
            s += val;
        }
        cout << s << endl;
    }
}