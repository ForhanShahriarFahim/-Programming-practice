#include<stdio.h>
int main()
{
   unsigned long long  int sum,m1,m2,n;
    scanf("%llu",&n);
    if(n%2==0)
    {
        m1=(n+2)/2;
        n=n-1;
        m2=(n+1)/2;
        sum=(m1*(m1-1))-(m2*m2);


    }
    else
    {
         m2=(n+1)/2;
        n=n-1;
        m1=(n+2)/2;
        sum=(m1*(m1-1))-(m2*m2);
    }
    printf("%llu",sum);
    return 0;
}
