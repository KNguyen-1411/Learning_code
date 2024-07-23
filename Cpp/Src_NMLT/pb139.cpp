#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//khanh nguyen dayy hihi
bool kt(char ch)
{
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    vector<vector<string>> kq;
    string line;
    while (getline(cin, line) && !line.empty())
    {
        vector<string> kqtam;
        string temp;
        for (char ch : line)
        {
            if (kt(ch))
            {
                temp += ch;
            }
            else if (!temp.empty())
            {
                kqtam.push_back(temp);
                temp = "";
            }
        }
        if (!temp.empty())
        {
            kqtam.push_back(temp);
        }
        reverse(kqtam.begin(), kqtam.end());
        kq.push_back(kqtam);
    }
    reverse(kq.begin(), kq.end());
    for (vector<string> words : kq)
    {
        for (string word : words)
        {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}