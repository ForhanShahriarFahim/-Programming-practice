#include<stdio.h>
int main()
{
    unsigned int  u;
    short int s;
    long int l;
    printf("Enter the unsigned number:");
    scanf("%u",&u);
    printf("\nEnter the short number:");
    scanf("%hd",&s);
    printf("\nEnter the long number:");
    scanf("%ld",&l);
    printf("%u %hd %ld",u,s,l);
}
