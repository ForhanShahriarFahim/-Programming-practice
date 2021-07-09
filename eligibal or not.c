#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age :");
    scanf("%d",&age);
    if(age>=18)
        printf("Congratulation you are eligible for casting your vote  ");
    else
        printf("Sorry");
    return 0;
}
