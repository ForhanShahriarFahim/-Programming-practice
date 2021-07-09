//repetedly reads string from the keyboard until the use entire quit
#include<stdio.h>
#include<string.h>
int main()
{
   char str[80];
   do
    {
        printf("Enter a string: ");
   gets(str);

    }while(strcmp("quit",str));
    return 0;

}
