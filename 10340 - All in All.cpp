#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,l1,l2;
    string s1,s2;

    while(cin>>s1>>s2)
    {
        int cnt = 0;
        l1 = s1.size();

        l2 = s2.size();
        for(int i=0;i<l2;i++)
        {
            if(s1[cnt]==s2[i])
            {
                cnt++;
                if(cnt==l1)
                {
                    printf("Yes\n");
                    break;
                }
            }
        }
        if(cnt!=l1)
        printf("No\n");

    }



}
