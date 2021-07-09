#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    vector<int> arr(n);
    arr[0] = 0;
    arr[1] = 0;

    for (int i = 1; i <= n; i++)
        cin >> vec[i];
    arr[2] = abs(vec[2] - vec[1]);

    for (int i = 3; i <= n; i++)
        arr[i] = min(arr[i - 1], arr[i - 2]);

    cout << arr[n] << endl;
}
