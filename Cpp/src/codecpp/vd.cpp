#include <iostream>
#include <vector>
using namespace std;

int getColor(int x, int y, int n)
{
    int cycle = (min(x, min(y, min(n - x + 1, n - y + 1))) - 1) % 3;
    if (cycle == 0)
    {
        return 1; // Màu "Đỏ"
    }
    else if (cycle == 1)
    {
        return 2; // Màu "Xanh"
    }
    else
    {
        return 3; // Màu "Vàng"
    }
}

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;

    vector<pair<int, int>> coordinates(k);
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        coordinates[i] = make_pair(x, y);
    }

    for (int i = 0; i < k; i++)
    {
        int x = coordinates[i].first;
        int y = coordinates[i].second;
        int color = getColor(x, y, n);
        cout << color << endl;
    }

    return 0;
}