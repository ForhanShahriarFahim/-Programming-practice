#include<stdio.h>
int main()
{
	int i,n,j,k;
	scanf("%d",&j);
	scanf("%d",&n);
	scanf("%d",&k);
	printf("Case #1:");
	if(n>0){
	
	for(i=1;i<=n;i++)
	{
		printf("%2d",i);
	}
} 

	else 
	{
		for(i=1;i>=n;i--)
		printf("%2d",i);
		
	}
	printf("\nCase #2:%d",k);
	

	return 0;
	
	
}

