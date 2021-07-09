#include<stdio.h>
int main()
{
	int i,j,n,a[10],s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				s=a[i];
				a[i]=a[j];
				a[j]=s;
			}
			
		}
	}
	printf("Assending sequence of the num is :");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
	
	
}
