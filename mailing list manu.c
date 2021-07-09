#include<stdio.h>
int main()
{
    int c;
    printf("Mailing menu :\n\n");
    printf(" 1. Enter address\n");
    printf("2. Delete address\n");
    printf("3. search the list\n");
    printf("4. print the list\n");
    printf("5. quit\n");
    do{
        printf("Enter the number of choice(1-5)");
        scanf("%d",&c);

    }while(c<1||c>5);
    return 0;

}
