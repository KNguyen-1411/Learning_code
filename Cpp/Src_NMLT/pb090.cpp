#include <bits/stdc++.h>
using namespace std;
long long nsodao(long long n)
{
    long long sodao = 0, luu;
    do
    {
        luu = n % 10;
        sodao = (sodao * 10) + luu;
        n = n / 10;
    } while (n != 0);
    return sodao;
}
long long nhiphan(int n)
{
    int kq = 0, chay = 1;
    while (n > 0)
    {
        int du = n % 2;
        kq += du * chay;
        n /= 2;
        chay *= 10;
    }
    return kq;
}
bool kt(int n, int k)
{
    if (n == k)
        return 1;
    else
        return 0;
}
int main()
{
    long long n;
    cin >> n;
    if ((kt(nhiphan(n), nsodao(nhiphan(n)))) && (n % 2 != 0))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}