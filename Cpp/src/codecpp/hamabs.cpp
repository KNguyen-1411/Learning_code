#include <bits/stdc++.h>
using namespace std;
int mabs(int n)
{
    if (n > 0)
        return n;
    else
        return -n;
}
double nabs(double n)
{
    if (n < 0)
        return -n;
    else
        return n;
}
int main()
{
    int n;
    cin >> n;
    cout << nabs(n);
}