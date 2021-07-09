#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    scanf("%d",&n);
    while(n%2==0)
    {
        n/=2;
        printf("2");
        if(n>=2)
            printf("*");

    }
    for(i=3;i<=sqrt(n);i+=2)
    {
        while(n%i==0)
        {
            n/=i;
        printf("%d",i);
        if(n>=i)
            printf("*");

        }

    }
    if(n>2)
        printf("%d",n);
}
