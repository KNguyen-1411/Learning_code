#include <bits/stdc++.h>
using namespace std;
int cd(int n)
{
    int temp = n, dem = 0;
    while (temp != 0)
    {
        dem++;
        temp /= 10;
    }
    return dem;
}
bool kt(int n)
{
    int mu = cd(n), s = 0, temp = n;
    while (n != 0)
    {
        s = s + (pow(n % 10, mu));
        n = n / 10;
    }
    if (s == temp)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (kt(i))
            cout << i << " ";
    }
    return 0;
}
