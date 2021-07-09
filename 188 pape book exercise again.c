#include<stdio.h>
#include<string.h>
int main()
{
    char *p[3]={
    "yes","NO","Maybe _We can do it"};
    char str[80];
    printf("Enter a string: \n");
    gets(str);
    printf(p[strlen(str)%3]);
}
