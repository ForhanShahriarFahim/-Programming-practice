#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],i;
    int l,j,f=0,c=0;
    gets(str);
    l=strlen(str);
    for(i='a';i<='z';i++)
    {
        f=0;
        for(j=0;j<l;j++)
        {
            if(i==str[j])
            f++;
        }
        if(f!=0)
        {
            c++;
        }
    }
    printf("%s",str);
    if(c%2==0)
    printf("CHAT WITH HER!\n");
    else if(c%2!=0)
        printf("IGNORE HIM!\n");
}
 
