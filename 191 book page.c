#include<stdio.h>
int main(void)
{
    myputs("this is a test");
    return 0;
}
void myputs(char *p)
{
    while(*p)
    {
        printf("%c",p);
        p++;
    }
    printf("\n");
}
