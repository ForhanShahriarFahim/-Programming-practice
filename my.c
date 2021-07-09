#include<stdio.h>
#include<conio.h>
int main()
{
	char a[4];
	int i;
	printf("Enter a sentence less than 80 letters:\n");
	for(i=0;i<80;i++)
	{
		a[i]=getchar();
		if(a[i]=='\r')break;
		
	}
	printf("\n");
	for(i=0;a[i]!='\r';i++)
	printf("%c",a[i]+1);	
	return 0;
		
	
}
