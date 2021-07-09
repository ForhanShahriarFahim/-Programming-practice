#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;
long long  base[21]={1,1,2,6,24,120,720,5040,40320,362880,3628800,39916800,479001600,6227020800,87178291200,1307674368000,20922789888000,355687428096000,6402373705728000,121645100408832000,2432902008176640000};
int main()
{
int t,k=1,a[23],h,j;
long long n;
scanf("%d",&t);
while(t--)
{
j=0;h=0;
scanf("%lld",&n);
for(int i=20;i>=0;i--)
{
if(n==base[i])
{

a[h++]=i;

j=1;
break;
}
else if(n>base[i])
{
a[h++]=i;
n=n-base[i];
}
}
if(j==0)
printf("Case %d: impossible\n",k++);
else{

printf("Case %d: %d!",k++,a[h-1]);

for(int i=h-2;i>=0;i--)
printf("+%d!",a[i]);

printf("\n");
}
}
}
