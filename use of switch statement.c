#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    do
    {       ch=getche();
            switch(ch)
            {
            case '\t':
                printf("Tab\n");
                break;
            case '\n':
                printf("New line\n");
                break;
            case '\b':
                printf("Backspace\n");
                break;
            case '\s':
                printf("Letter s \n");
                break;
            }


    }while(ch!='q');
}
