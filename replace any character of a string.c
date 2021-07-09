#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],ch,r;
    int i,l,j;
    printf("Enter a string :");
    gets(s);
    printf("\nEnter the letter you want to replace :");
    scanf("%c",&ch);
    printf("\nEnter the new character you want to replace with : ");
    scanf("%c",&r);
    getchar();
    for(i=0;s[i]!='\0';i++){
        if(s[i]==ch){
            s[i]=r;
            break;
        }
    }
    printf("\nThe final string is %s =",s);
    return 0;
}
