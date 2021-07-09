#include<stdio.h>
int main()
{
	int a,b,c,temp,i,j,k;
	printf("Enter the numbers :");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		temp=a;
		a=b;
		b=temp;
	}
	if(b>c)
	{
		temp=b;
		b=c;
		c=temp;
	}
	if(a>c)
	{
		temp=a;
		a=c;
		c=temp;
	}
	printf("Assending order:\n%d\n%d\n%d\n",a,b,c);
}
