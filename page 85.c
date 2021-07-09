#include<stdio.h>
int main(void)
{
    int a,b;
    char ch;
    printf("DO you want to:\n");
    printf("Add,substract,Multiply, or divide\n");
    do{
        printf("Enter the first letter:\n");
        ch=getchar();

    }while(ch!='A'&&ch!='S'&&ch!='M'&&ch!='D');
    printf("\n");
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    printf("Enter the value of b:\n");
    scanf("%d",&b);
    if(ch=='A')
        printf("%d",a+b);
    if(ch=='S')
        printf("%d",a-b);
    if(ch=='M')
        printf("%d",a*b);
    if(ch=='D')
        printf("%d",a/b);
    return 0;

}
