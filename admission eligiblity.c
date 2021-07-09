#include<stdio.h>
int main()
{
    int m,p,c;
    printf("Enter the marks of math");
    scanf("%d",&m);
    printf("Enter the marks of physics");
    scanf("%d",&p);
    printf("Enter the marks of chemistry");
    scanf("%d",&c);
    if(m>=65)
        if(p>=55)
        if(c>=50)
        if((m+p+c)>=180 || (m+p)>=140)
        printf("The candidate is elligable for admission");
        else
            printf("Not eligible 1");
        else
            printf("Not eligible 2");
        else
            printf("Not eligible 3");
        else
            printf("Not eligible 4");
        return 0;


}
