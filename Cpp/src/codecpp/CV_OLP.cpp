#include <bits/stdc++.h>
using namespace std;

bool check(string str, string strvong)
{
    int vt = strvong.find(str[0]); // tìm vị trí đầu
    if (vt == string::npos)
    {
        return 0; // không thấy trả về 0
    }

    int n = strvong.length();
    int dem = 0;
    for (int i = vt; i < vt + n; i++)
    {
        int chiso = i % n; 
        if (strvong[chiso] == str[dem])
        {
            dem++;
            if (dem == str.length())
            {
                return 1; 
            }
        }
    }
    return 0; 
}

int dem(string str, int n, string strvong[])
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (check(str, strvong[i]))
        {
            dem++;
        }
    }
    return dem;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string str;
    cin >> str;
    int n;
    cin >> n;
    string a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << dem(str, n, a) << endl;
    return 0;
}