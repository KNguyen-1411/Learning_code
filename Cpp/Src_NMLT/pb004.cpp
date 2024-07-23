#include <iostream>
using namespace std;
int main()
{
    long long a, b, c, d, e, h;
    cin >> a >> b;
    d = a % 10;
    h = b % 10;
    c = a / 1000;
    e = b / 1000;
    cout << d + h << endl;
    cout << c * e << endl;
    return 0;
}