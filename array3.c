#include<stdio.h>
#define max_size 10
int main()
{
	int source[max_size],dest[max_size];
	int i,size;
	printf("Enter the size of the array\n");
	scanf("%d",&size);
	printf("Enter the element of the source:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&source[i]);
		
	}
	for(i=0;i<size;i++)
	dest[i]=source[i];
	printf("Enter the array of the 1st elements are:\n");
	for(i=0;i<size;i++)
	printf("%d ",source[i]);
	printf("\nEnter the copied array:\n");
	for(i=0;i<size;i++)
	printf("%d ",dest[i]);
	return 0;
}
