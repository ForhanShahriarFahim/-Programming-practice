#include<stdio.h>
int main()
{
	int array[100],position,c,n,value;
	printf("Enter the number of elements in the array\n");
	scanf("%d",&n);
	printf("Enter the %d elements",n);
	for(c=0;c<n;c++)
	scanf("%d",&array[c]);
	printf("Enter the location where you wish to insert an number:\n");
	scanf("%d",&position);
	printf("Enter the value to insert:\n");
	scanf("%d",&value);
	for(c=n-1;c>=positionn-1;c--)
	array[c+1]=array[c];
	array[position-1]=value;
	printf("Resultant array is\n");
	for(c=0;c<=n;c++)
	printf("%d\n",array[c]);
	return 0;
}
