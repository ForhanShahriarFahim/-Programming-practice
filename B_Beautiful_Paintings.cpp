#include <iostream>
int n, m, a[1001], k;
main()
{
    for (std::cin >> n; std::cin >> k;)
        a[k]++, m < a[k] ? m = a[k] : 0;
    std::cout << n - m;
}