#include<bits/stdc++.h>
using namespace std;

typedef long long int lld;

#define sf scanf
#define pf printf
#define pb push_back
#define read(n) sf("%d",&n)
#define mem(a,b) memset(a,b,sizeof a)



string str;
int main()
{
    int i,j,k,test,kase = 0,num;

    read(test);
    while(test--)
    {
        getchar();
        getline(cin,str);
        int tot,len = str.length();
        bool res = true;
        read(num);
        for(i=1;i<=num;i++)
        {
            read(k);
            tot = 0;
            if(res==true)
            {
                for(j=0;j<len;j++)
                {
                    tot = ((tot*10)+(str[j]-'0'))%k;
                }
                if(tot!=0) res = false;
            }
        }
        if(res == true)
            cout<<str<<" - Wonderful."<<endl;
        else
            cout<<str<<" - Simple."<<endl;

    }
    return 0;
}
