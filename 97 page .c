#include<stdio.h>
int main()
{
    int a,b;
    char ch;
    printf("Just do it __");
    do{
        printf("Enter the first letter");
        ch=getchar();
        }while(ch!='A'&& ch!='S' && ch!='M'&& ch!='D');
        printf("\n");
        if(ch=='A')
            printf("Right");

}
