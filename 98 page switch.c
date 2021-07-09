#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    do
    {
        printf("\nEnter a character and q to Quit:");
        ch=getche();
        printf("\n");
        switch(ch)
        {
        case 'a':
            printf("NOw is");
        case 'b':
            printf("the time");
        case 'c':
            printf("for all good men");\
        default:
            printf("\nDefault is also printed");
        }
    }while(ch!='q');
    return 0;


}
