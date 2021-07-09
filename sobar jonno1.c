#include<stdio.h>
#include<conio.h>
int main()
{
   char ch,name[80];
   int i;
   printf("Print your name:");
   for(i=0;(ch=getchar())!='\n';++i)
   {
       name[i]=ch;

   }
   name[i]='\0';
   printf("\n %s %s %s", "Nice to meet you", name, ".");
   printf("\n your name spelled in back ward : ");
   for(--i;i>=0;--i)
   {
       putchar (name[i]);
   }
   printf("\n\n Have a nice day . . . . .\a\a\a\a");
}
