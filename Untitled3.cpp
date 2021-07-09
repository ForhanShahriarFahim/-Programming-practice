#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("Enter a lower case letter :\n");
	printf("Press enter to Quit\n");
	do
	{
		ch=getche();
		if(ch!='\r');
		printf("%c\n",ch-32);
		
	}while(ch!='\r');
}
