#include <stdio.h>
#include<string.h>

int main()
{
    int i,l=0;
    char s[100];
    scanf("%s",s);
    for(i=1; i<strlen(s); i++)
    {
        if(s[i]>=65&&s[i]<=90)
        {
            l++;
        }
    }
   // printf("%d  %d: \n",l, strlen(s));
    if(l==strlen(s)-1)
    {
        for(i=0; i<strlen(s); i++)
        {
            if(s[i]>=65&&s[i]<=90)
            s[i]=s[i]+32;
            else if(s[i]>=97&&s[i]<=122)
            s[i]=s[i]-32;
        }
    }

    printf("%s\n",s);
}
