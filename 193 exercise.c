#include<stdio.h>
#include<string.h>
int main()
{
    char str[80];
    strcpy(str,"first part");
    mystrcat(str," second part");
    printf(str);
}
void mystrcat(char *to,char *from)
{
   // while(*to)
    //    to++;
    while(*from)
        *to++=*from++;
    *to='\0';
}
