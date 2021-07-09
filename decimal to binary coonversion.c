#include<stdio.h>
int main()
{
    int i=1,n,ve,re,binary=0;
    printf("\nEnter a decimal number: ");
    scanf("%d",&n);
    ve=n;
    while(n!=0){
        re=n%2;
        n=n/2;
        binary=binary+(re*i);
        i=i*10;
    }
    printf("\nBinary number of decimal %d is: %d",ve,binary);
}
