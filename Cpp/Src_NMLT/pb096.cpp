#include <bits/stdc++.h>
using namespace std;

int timle(const vector<int> &arr)
{
    map<int, int> demsolan;
    for (const auto &n : arr)
    {
        demsolan[n]++;
    }
    int nhieulannhat = arr[0];
    int max = demsolan[arr[0]];

    for (int n : arr)
    {
        if (demsolan[n] > max)
        {
            nhieulannhat = n;
            max = demsolan[n];
        }
    }
    return nhieulannhat;
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