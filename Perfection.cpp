#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    printf("PERFECTION OUTPUT\n");
    while(cin>>n&&n!=0)
    {
        int temp=n,sum=0;
        for(i=1;i<=n/2;i++)
        {
            if(temp%i==0)
            {
                sum+=i;
            }
        }
        if(n==sum)
            printf("%5d  PERFECT\n",n);
        else if(n>sum)
            printf("%5d  DEFICIENT\n",n);
        else
            printf("%5d  ABUNDANT\n",n);

    }
    printf("END OF OUTPUT\n");

}
