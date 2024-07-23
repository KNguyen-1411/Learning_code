#include <bits/stdc++.h>
using namespace std;
void hd(int &n, int &m)
{
    int temp = n;
    n = m;
    m = temp;
}
int main()
{
    int n, m;
    cin >> n >> m;
    hd(n, m);
    cout << n << " " << m;
}
