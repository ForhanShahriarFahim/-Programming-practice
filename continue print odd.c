#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<101;i++)
    {
        if(!(i%2))
            continue;
        printf("%d\n",i);
    }
}
