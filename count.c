#include<stdio.h>
int main()
{
	int count,i,n;
	printf("Enter the num :");
	scanf("%d",&n);
	count=0;
	while(n!=0)
    {
    	n=n/10;
    	count++;
	}
	printf("%d",count);
	return 0;
}
