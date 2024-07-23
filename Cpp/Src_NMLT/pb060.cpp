#include <bits/stdc++.h>
using namespace std;

int timle(const vector<int> &arr)
{
    unordered_map<int, int> demsolan;
    for (const auto &n : arr)
    {
        demsolan[n]++;
    }
    for (const auto &n : demsolan)
    {
        if (n.second % 2 != 0)
        {
            return n.first;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        arr.push_back(k);
    }
    cout << timle(arr);
    return 0;
}