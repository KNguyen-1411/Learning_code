#include <bits/stdc++.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long a[n];
    for (int i = 0; i <= n; i++)
    {
        a[0] = 2;
        a[1] = 1;
        if (i >= 2)
        {
            a[i] = a[i - 2] + a[i - 1];
        }
        std::cout << a[i] << " ";
    }
    return 0;
}