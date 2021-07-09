#include<stdio.h>
int main()
{
	int a,b;
	char ch;
	printf("Do you want to:\n");
	printf("Add, substract, multiply or divide ?\n");
	do{
		printf("Enter the first letter: ");
		ch=getchar();
	}while(ch=='A'&& ch=='S'&& ch=='M'&&ch=='D');
	printf("\n");
	printf("Enter the first num: ");
	scanf("%d",&a);
	printf("Enter the second number :");
	scanf("%d",&b);
	if(ch=='A')
	printf("%d",a+b);
	if(ch=='B')
	printf("%d",a-b);
	if(ch=='M')
	printf("%d",a*b);
	if(ch=='D')
	printf("%d",a/b);
	return 0;
	
}
