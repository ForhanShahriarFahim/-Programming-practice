#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i;
    string str;
    char c1,c2;
    int l,r;
    cin>>n>>m;
    cin>>str;
    while(m--)
    {
        cin>>l>>r>>c1>>c2;
        for(i=l-1;i<=r-1;i++)
        {
            if(str[i]==c1)
            {
                str[i] = c2;
            }
        }
    }
            cout<<str;


}
