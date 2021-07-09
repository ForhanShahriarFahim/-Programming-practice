#include<stdio.h>
int main()
{
    int a1,i1,l1,i;
    printf("Enter firsr num : ");
    scanf("%d",&a1);
    printf("Enter increment :");
    scanf("%d",&i1);
    printf("Enter last  num : ");
    scanf("%d",&l1);
    for(i=a1;i<=l1;i=i+i1)
    {
        printf("%d\t",i);
    }
    return 0;
}
