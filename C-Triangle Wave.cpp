#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int t=0;t<test;t++)
    {


        int amp,fre;
        cin>>amp>>fre;
        for(int k=0;k<fre;k++)
        {
            for(int i=0;i<amp;i++)
            {
                for(int j=0;j<i+1;j++)
                {
                    printf("%d",i+1);
                }
                printf("\n");
            }
            for(int i=amp;i>1;i--)
            {
                for(int j=i-1;j>0;j--)
                {
                    printf("%d",i-1);
                }
                printf("\n");
            }
            if(t!=test-1||k!=fre-1)
                printf("\n");
        }
    }

}
