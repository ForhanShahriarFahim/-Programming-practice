#include <bits/stdc++.h>
using namespace std;
int main()
{
    array<int, 4> a;
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    cout << a.front() << endl;
    cout << a.size() << endl;
}