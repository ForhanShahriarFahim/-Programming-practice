#include<stdio.h>
#include<string.h>
int main()
{
    int l;
    char ch[101];
    char str[101];
    gets(ch);
    gets(str);
    strlwr(ch);
    strlwr(str);
    l = strlen(ch);
    int n,cnt=0;

    for(int i=0;i<l;i++)
    {
        if(ch[i]==str[i])
        {
            cnt++;
            if(cnt==l)
            {
                printf("0\n");
                break;
            }
        }

        else if(ch[i]>str[i])
        {
            printf("1\n");
            break;
        }
        else if(str[i]>ch[i])
        {
            printf("-1\n");
            break;

        }


    }

}
