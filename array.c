#include<stdio.h>
int main()
{
	printf("Please enter your desire number:\n");
	int number;
	scanf("%d",&number);
	int i;
	int arr[20];
	int rec;
	if(number<0)
	rec=-number;
	else
	rec=number;
	for(i=0;rec>0;i++)
	{
		arr[i]=rec%10;
		rec=rec/10;

	}
	int x;
	x=i;
	for(i=0;i<x;i++)
	{
	printf("%d",arr[i]);
	}
	return 0;
}
