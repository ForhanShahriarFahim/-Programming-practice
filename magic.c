#include<stdio.h>
int main()

{
	int i,j,n,a[12],l;
	printf("Enter a num :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	
	scanf("%3d",&a[i]);
}

	for(j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
		{
			l=a[i];
			a[i]=a[j];
			a[j]=l;
			
			
		}
	}
	for(i=0;i<n;i++)
	printf(" %d",a[i]);
	return 0;
	
																																																																																																																										
	
}
