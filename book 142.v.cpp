#include<stdio.h>
int main(void)
{
	int temp[31],i,min, max,ave;
	int days;
	printf("How many days in the month?");
	scanf("%d",&days);
	for(i=0;i<days;i++){
	
	printf("Enter temperature for day %d:",i+1);
	scanf("%d",&temp[i]);
	}
	ave=0;
	for(i=0;i<days;i++)
	ave=ave+temp[i];
	printf("Average temperature %d\n",ave/days);
	min=200;
	max=0;
	for(i=0;i<days;i++)
	{
		if(min>temp[i])
		min=temp[i];
		if(max<temp[i])
		max=temp[i];
	}
	printf("Minimum temprature is %d\n",min);
	printf("Maximum temprature is %d\n",max);
	
}
