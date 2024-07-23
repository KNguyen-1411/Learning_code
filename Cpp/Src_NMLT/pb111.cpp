#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int T;
void Task() {
    ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
    if (fopen("test.inp", "r")) {
        freopen("test.inp", "r", stdin);
        freopen("test.out", "w", stdout);
    }
}

void Solve() {
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
}

int main() {
    Task();
    Solve();
}