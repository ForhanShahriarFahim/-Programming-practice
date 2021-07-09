#include<stdio.h>
int main()
{
    float g,l;
    printf("Enter how many gallon");
    scanf("%f",&g);
    do
    {
        l=g*3.7854;

    }while(g!=0);
    printf("%f",l);
    return 0;
}
