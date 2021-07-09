#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int item[100];
	int a,b,t,count;
	printf("How many number?\n");
	scanf("%d",&count);
	printf("Enter those numbers:");
	for(a=0;a<count;a++)
	scanf("%d",&item[a]);
	for(a=1;a<count;++a)
	   for(b=count;b>=a;--b)
	   {
	   	if(item[b-1]>item[b])
	   	{
	   		t=item[b-1];
	   		item[b-1]=item[b];
	   		item[b]=t;
		   }
	   }
	for(t=0;t<count;t++)
	printf("%d\t",item[t]);
	return 0;
}
	
		
	
