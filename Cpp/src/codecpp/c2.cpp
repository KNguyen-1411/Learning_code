#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    map<char, int> save;
    for (char ch : str)
    {
        if (isalnum(ch))
        {
            save[ch]++;
        }
    }
    for (int i = 0; i < 256; i++)
    {
        char ch = static_cast<char>(i);
        if (save.count(ch) > 0)
        {
            cout << ch << "\t" << save[ch] << endl;
        }
    }
    return 0;
}