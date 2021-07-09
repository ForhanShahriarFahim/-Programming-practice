#include<stdio.h>
int main()
{
    int a;
    char c;
    do{
        printf("Enter the first digit:\n");
        printf("Enter your choice from (1-5) :\n");
        scanf("%d",&a);
    }while(1>=a&&a>=5);
    if(a==1)
        printf("Enter address\n");
    if(a==2)
        printf("Delete address\n");
    if(a==3)
        printf("Search the list");
    if(a==4)
        printf("Print the list");
    if(a==5)
        printf("Quit");

}
