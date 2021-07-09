#include<stdio.h>
#include<conio.h>
int main(void)
{
    int i;
    char ch;
    ch='a';
    for(i=0;ch!='q';i++){

         if(ch!='q')
        printf("pass : %d\n",i);
        else 
        printf("Fail :%d",i);
   ch=getchar();
    }
    return 0;
}


