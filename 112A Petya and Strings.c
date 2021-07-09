#include<stdio.h>
#include<string.h>
int main()
{
    char s1[101],s2[101];
    gets(s1);
    //s1[101]=strlwr(s1);

    gets(s2);
   // s2[101]=strlwr(s2);
    if(strcmp(strlwr(s1),strlwr(s2))==0)
        printf("0");
    else if(strlwr(s1),strlwr(s2)>0)
        printf("1");
    else if(strlwr(s1),strlwr(s2)<0)
        printf("-1");
    return 0;
}
