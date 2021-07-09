#include<stdio.h>
int main()
{
    float g,l;
    printf("Enter how many gallon :\n");
    scanf("%f",&g);
    do
    {
    	printf("Litters: %f\n",g*3.7854);
    	printf("Enter the gallons or 0 to quit.=");
    	scanf("%f",&g);
       

    }while(g!=0);
    printf("%f",l);
    return 0;
}

