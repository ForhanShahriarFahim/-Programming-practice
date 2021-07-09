#include<stdio.h>
#include<conio.h>

int main(void)
{

char mess[100];
int i;
printf("Enter a massage less than 80 character\n");
for(i=0;i<8;i++)
{
	mess[i]=getche();
	if(mess[i]=='\r')
	break;
	
}
printf("\n");
for(i=0;mess[i]!='\r';i++)
printf("%c",mess[i]+1);
return 0;
}
