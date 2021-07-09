#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
   cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int ans = (n-1)/(m-1);
    cout<<n+ans<<endl;
}
