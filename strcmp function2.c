#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="abcd", str2[]="abCd",str3="abcd";
    int result;
    result=strcmp(str1,str2);
    printf("strcmp(str1, str2) =%d\n",result);
    result=strcmp(str1,str2);
    printf("strcmp(str1,str3)=%d\n",result);
    return 0;
}
