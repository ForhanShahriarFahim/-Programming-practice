#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j;
    scanf("%lld",&n);

    while(n%2==0)
        {
            n/=2;
            printf("2 ");
        }
    for(i=3;i<=sqrt(n);i=i+2)
    {
        while(n%i==0)
        {
            n/=i;
            printf("%lld ",i);
        }

    }
    if(n>2)
        printf("%lld ",n);
}
