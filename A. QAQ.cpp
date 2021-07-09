#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int l;
    cin>>str;
     l = str.size();
    int i,j,k,cnt=0;
    for(i=0;i<l;i++)
    {
        for(j=i;j<l;j++)
        {
            for(k=j;k<l;k++)
            {
                if(str[i]=='Q'&& str[j]=='A'&& str[k]=='Q')
                {
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;
}
