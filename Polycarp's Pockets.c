#include<stdio.h>
int main()
{
	int a[101]={0},n,i,p=0,value;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&value);
		a[value]++;
		if(a[value]>p)
            p=a[value];
	}
	printf("%d",p);
	return 0;
}
