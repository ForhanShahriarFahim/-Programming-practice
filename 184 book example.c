#include<stdio.h>
#include<string.h>
int main()
{
    char *p="stop";
    char ch[80];
    do
    {
        printf("Enter a string: ");
        gets(ch);
    }while(strcmp(p,ch));
    return 0;
}
