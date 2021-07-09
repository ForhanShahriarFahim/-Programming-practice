
#include <bits/stdc++.h>
using namespace std;
int a, b;
int main()
{
    cin >> a >> b;
    cout << max((a + b) - 2 - (a % 3 == b % 3), 0);
}