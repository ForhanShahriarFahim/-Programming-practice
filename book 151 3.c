#include<stdio.h>
#include<conio.h>
int main()
{
    char bigstr[1000]="",str[80];
    for( ; ; )
    {
        printf("Enter a string: ");
        grts(str);
        if(!strcmp(str,"quit"))
        break;
        strcat(str,"\n");
        if(strlen(bigstr)+strlen(str) >=1000)
            break;
        strcat(bigstr,str);
    }
    printf(bigstr);
}
