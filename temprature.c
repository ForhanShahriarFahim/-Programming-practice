#include<stdio.h>
int main()
{
	int i,temp[31],min,max,avg;
	int days;
	printf("How many numbers in a month?");
	scanf("%d", &days);
	for(i=0; i<days; i++)
	{
		printf("Enter the day temparature for day %d :",i+1);
		scanf("%d", &temp[i]);
		
	}
	avg=0;
	for(i=0;i<days;i++)
	
		avg=avg+temp[i];
		
	
	printf("Average temparature %d\n",avg/days);
	min=200;
	max=0;
	for(i=0;i<days;i++)
	{
		if(min>temp[i])
		min=temp[i];
		if(max<temp[i])
		max=temp[i];
	}
	printf("Minimum temprature: %d\n", min);
	printf("Maximum temprature %d\n",max);
}
