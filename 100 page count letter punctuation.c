#include<stdio.h>
#include<conio.h>
int main()
{
    int digit=0,punc=0,letter=0;
    char ch;
    printf("Enter characters, Enter to stop.\n");
    do
    {
        ch=getche();
        switch(ch)
        {
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case '0':
            digit++;
            break;
        case '.':
        case ',':
        case '?':
        case '!':
        case ':':
        case ';':
        case '-':
        case '#':
            punc++;
            break;
        default:
            letter++;

        }
    }while(ch!='\r');
    printf("\nDigits: %d",digit);
    printf("\nPunctuation: %d",punc);
    printf("\nLetters: %d",letter-1);


}
