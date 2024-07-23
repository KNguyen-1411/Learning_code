#include <bits/stdc++.h>
using namespace std;
int kcnt(string O, string E)
{
    if (O.length() == E.length())
    {
        return O.length();
    }
    else if (O.length() < E.length())
    {
        return O.length();
    }
    else
    {
        return E.length();
    }
}
string newmk(string O, string E)
{
    string mk;
    int minxau = kcnt(O, E);
    for (int i = 0; i < minxau; i++)
    {
        mk += O[i];
        mk += E[i];
    }
    if (O.length() > E.length())
    {
        mk += O.substr(minxau);
    }
    else if (E.length() > O.length())
    {
        mk += E.substr(minxau);
    }
    return mk;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string O, E;
    cin >> O >> E;
    cout << newmk(O, E);
    return 0;
}
