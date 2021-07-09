#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    do
    {
        ch=getchar();
        if(ch>'0')

            printf("Positive\n");

            else if(ch=='0')
                printf("Zero\n");

            else

                printf("Negative\n");


    }while(ch!='\r');
}
