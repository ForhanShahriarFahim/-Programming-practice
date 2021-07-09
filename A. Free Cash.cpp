//Created by @Fahim🐀򐀀
#include<bits/stdc++.h>
using namespace std;
int main()
{
          int n,h1,h2,m1,m2,cnt=1,minimum=1;
          cin>>n;
          cin>>h1>>m1;
          for(int i=0;i<n-1;i++)
          {
            cin>>h2>>m2;
            if(h1==h2 && m1==m2)
            cnt++;
            else
            {
              cnt=1;
            }

            h1=h2;
            m1=m2;
            minimum=max(minimum,cnt);

          }

          cout<<minimum<<endl;
}
