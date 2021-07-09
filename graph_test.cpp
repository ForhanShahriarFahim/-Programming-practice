#include <bits/stdc++.h>
using namespace std;

#define Fast ios::sync_with_stdio(false);
#define Stream  \
    cin.tie(0); \
    cout.tie(0);
#define F first
#define S second
#define mp make_pair
typedef long long LL;
typedef unsigned long long ULL;

//const LL MOD = 1e9 + 7;
const int N = 1e5 + 1e2;

int n, m, v1, v2, l[N];

vector<int> v[N];

LL dfs(int i, int f, int c)
{
    if (l[i])
        c++;
    else
        c = 0;

    if (m < c)
        return 0;

    int s = (v[i].size() == 1 && i != 0);
    cout<<"First s: "s<<s<<endl;

    for (auto x : v[i])
        if (x != f)
        {
            s += dfs(x, i, c);
            //cout<<"second s: "<<s<<endl;
        }
     //cout<<"ebar: "<<i<<endl;       


    return s;
}

int main()
{
    Fast Stream
            cin >>
        n >> m;

    for (int i = 0; i < n; ++i)
        cin >> l[i];

    for (int i = 1; i < n; ++i)
    {
        cin >> v1 >> v2;

        v1--;
        v2--;

        v[v1].push_back(v2);
        v[v2].push_back(v1);
    }

    cout << dfs(0, 0, 0);
}