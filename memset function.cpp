#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n",str);
    memset(str+13,'.',8*sizeof(char));
    printf("After memset(): %s\n",str);
    //printf("%d\n",sizeof(char));
    return 0;
}
