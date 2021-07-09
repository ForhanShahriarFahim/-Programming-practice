#include<stdio.h>
#include<string.h>
int main()
{
    char str[80];
    strcpy(str,"hello\t");
    strcat(str,"world");
    printf(str);

}
