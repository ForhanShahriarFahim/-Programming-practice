#include<stdio.h>
int main()
{
    int i,count=0;
    char str[100],ch;
    printf("Enter a string:");
    gets(str);
    printf("\nEnter a charater : ");
    scanf("%c",&ch);
    for(i=0;str[i]!='\0';i++)
    {
        if(ch==str[i])
            count++;
    }
    printf("\n%d",count);
}
