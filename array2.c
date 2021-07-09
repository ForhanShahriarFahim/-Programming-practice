#include<stdio.h>
int main()
{
	int i,ave,sum=0;
	int marks[9];
	for(i=0;i<=9;i++)
	{
		printf("\nmaarks ");
		scanf("%d",&marks[i]);
	}
	for(i=0;i<=9;i++)
	sum=sum+marks[i];
	ave=sum/9;
	printf("Average marks =%d",ave);
	return 0;
	
}
