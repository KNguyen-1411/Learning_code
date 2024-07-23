#include <bits/stdc++.h>
int main()
{
    long long n, j, i, s = 0;
    std::cin >> n;
    i = n;
    while (n > 0)
    {
        j = n % 10;
        s = s * 10 + j;
        n /= 10;
    }
    if (i == s)
        std::cout << "Yes";
    else
        std::cout << "No";
    return 0;
}