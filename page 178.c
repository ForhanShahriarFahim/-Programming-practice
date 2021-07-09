#include<stdio.h>
int main()
{
    char *p,ch;
    int i;
    p=&ch;
    for(i=0;i<10;i++)
        p[i]='A'+i;
    printf("%c",p[i]);
    return 0;
}

