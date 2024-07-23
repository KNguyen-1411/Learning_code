#include <bits/stdc++.h>
using namespace std;
long long nsodao(long long n)
{
    long long sodao = 0, luu = 0;
    do
    {
        luu = n % 10;
        sodao = (sodao * 10) + luu;
        n = n / 10;
    } while (n != 0);
    return sodao;
}
bool kt(long long k)
{
    if (k == 1)
    {
        return false;
    }
    for (long long i = 2; i <= sqrt(k); i++)
    {
        if (k % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    long long s;
    cin >> s;
    long long f[s];
    for (long long i = 0; i < s; i++)
    {
        cin >> f[i];
    }
    for (long long i = 0; i < s; i++)
    {
        if (kt((nsodao(f[i]))))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}