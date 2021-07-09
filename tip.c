#include<stdio.h>
#include<conio.h>
int main()
{
    float i;
    char ch;
    printf("Tip computer:\n");
    for(i=1;i<=100;i++)
    {
        printf("%f %f %f %f\n",i,i+i*.1,i+i*.15,i+i*.20);
        printf("\nContinue Y/N");
        ch=getche();
        printf("\n");
        if(ch=='N');
        break;
    }
}
