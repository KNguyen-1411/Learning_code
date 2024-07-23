#include <bits/stdc++.h>
using namespace std;
int tongnghiem(int n)
{
    int tong = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            tong += i;
        }
    }
    return tong;
}
void nghiem(int n)
{
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin >> n;
    if (n == tongnghiem(n))
    {
        cout << "Yes" << endl;
        nghiem(n);
    }
    else
    {
        cout << "No";
    }
    return 0;
}