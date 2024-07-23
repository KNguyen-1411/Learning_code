#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x, k;
    cin >> x >> k;
    x = pow((log(pow(sqrt(fabs(x)), 4) + pow(k, 3)) / log(10)), 3) + pow(cos(x), 5);
    cout << fixed << setprecision(2) << x << endl;
    return 0;
}