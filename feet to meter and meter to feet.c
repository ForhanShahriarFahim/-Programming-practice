#include<stdio.h>
int main()
{
    float n,choice;
    printf("Enter n :");
    scanf("%f",&n);
    printf(" 1:m to f or 2: f to m\n");
    printf("Enter choice :");
    scanf("%f",&choice);
    if(choice  ==1 )
        printf("%f\n",n*3.28);
    if(choice  ==2 )
        printf("%f\n",n/3.28);
    return 0;


}
