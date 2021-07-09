#include<stdio.h>
#include<math.h>

int main()
{   
    int n;
    printf("Enter the value of N: ");       
    scanf("%d",&n);
    long int sum,ave,miu,standard_deviation=0,mean;
    sum = (n*(n+1))/2;
    mean = sum/n;
    for(int i=1;i<=n;i++)
    {
        standard_deviation +=  pow(i-mean,2);
    }
    printf("Standard Deviation is %.2lf",sqrt(standard_deviation/n));
}