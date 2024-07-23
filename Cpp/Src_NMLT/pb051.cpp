#include <bits/stdc++.h>
int main()
{
    int h, a, b, day = 1;
    std::cin >> h >> a >> b;
    if (a <= b && a < h)
        std::cout << -1;
    else if (a >= h)
    {
        std::cout << -1;
    }
    else if (a > b && h > a)
    {
        day = ((h - a) / (a - b)) + 1;
        if ((h - a) % (a - b) != 0)
            day = ((h - a) / (a - b)) + 2;
        std::cout << day;
    }

    return 0;
}