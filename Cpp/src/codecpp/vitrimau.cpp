#include <bits/stdc++.h>
using namespace std;
struct kq
{
    int x, y;
};
int mcolor(int x, int y, int n)
{
    int kq = (min(x, min(y, min(n - x + 1, n - y + 1))) - 1) % 3;
    if (kq == 0)
    {
        return 1; // ĐỎ
    }
    else if (kq == 1)
    {
        return 2; // Xanh
    }
    else
    {
        return 3; // Vàng
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n; // nhap do rong
    int k;
    cin >> k; // nhap so test

    kq a[k];
    for (int i = 0; i < k; i++)
    {
        cin >> a[i].x >> a[i].y;
    }

    for (int i = 0; i < k; i++)
    {
        cout << mcolor(a[i].x, a[i].y, n) << endl;
    }

    return 0;
}