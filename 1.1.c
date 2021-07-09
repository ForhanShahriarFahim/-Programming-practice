#include<stdio.h>
int main()
{
	int i,n,rem,temp,count;
	printf("Enter a num :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
			temp=i;
			while(temp)
			{
				rem=temp%10;
				if(rem==0)
				{
					count++;
					break;
				}
				temp=temp/10;
			}
	}
	printf("%d",count);
	return 0;
}
