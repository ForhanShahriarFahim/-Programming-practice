#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,initial;
    cin>>n>>initial;
    char ch;
    int cnt=0,d;
    while(n--)
    {
        cin>>ch>>d;
        if(ch=='+')
        {
            initial+=d;
        }
        else if(ch=='-')
        {
            if(initial<d)
            {
                cnt++;
            }
            else
            initial-=d;

        }

    }
    printf("%d %d",initial,cnt);
}
