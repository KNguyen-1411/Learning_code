#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long n;
    cin >> n;
    unsigned long tong = 0;
    unsigned long tich = 1;
    unsigned long so;
    while (n != 0)
    {
        so = n % 10;
        tong += so;
        tich *= so;
        n /= 10;
    }
    double tySo = (double)tich / tong;
    cout << fixed << setprecision(3) << tySo << endl;
    return 0;
}