#include<stdio.h>
int main()
{
    long long int n,n1,even,odd;
    scanf("%lld",&n);
    n1=n/2;
    even = n1*(n1+1);
    if(n%2==0)
        odd = n1*n1;
    else
        odd = (n1+1)*(n1+1);
    printf("%lld",even-odd);


}
