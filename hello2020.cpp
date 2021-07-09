#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,query,y;
    cin>>n>>m;
    string s[n],t[m];
    for(int i=0;i<n;i++)
    cin>>s[i];

    for(int i=0;i<m;i++)
        cin>>t[i];
    cin>>query;
    while(query--)
    {
        cin>>y;
        cout<<s[(y-1)%n]+t[(y-1)%m]<<endl;
    }

}
