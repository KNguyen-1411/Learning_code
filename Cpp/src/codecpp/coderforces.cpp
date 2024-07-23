#include <iostream>
using namespace std;
bool kt(int n)
{
    if (n % 4 == 0)
        return 1;
    for (int i = 2; i < n; i = i + 2)
    {
        if ((n - i) % 2 == 0)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n;
    n = 10;
    if (n % 2 == 0)
    {
        if (kt(n))
            cout << "Yes";
        else
            cout << "No";
    }
    else
    {
        cout << "No";
    }
    return 0;
}