#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back

int main()
{
    ll n, m, i, j, k, a, ans = 0, mx = 0, sum = 0;
    vector < ll > v;
    string s;
    cin >> s;
    for(i = 0; i < s.size(); i++){
        v.pb(s[i]);
        if(v.size() > 1){
            if(v[v.size() - 1] == v[v.size() - 2]){
                v.pop_back();
                v.pop_back();
                ans++;
            }
        }
    }
    if(ans % 2 != 0)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
