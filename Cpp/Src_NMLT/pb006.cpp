#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x, a;
    cin >> x;
    a = sin(x) + sqrt(0.5 * log2(3 * x)) + ceil(3 * exp(x));
    cout << fixed << setprecision(6);
    cout << a << endl;
    return 0;
}