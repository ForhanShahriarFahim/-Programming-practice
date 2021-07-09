/*Input the Employees ID(Max. 10 chars): 0342
Input the working hrs: 8
Salary amount/hr: 15000
Expected Output:
Employees ID = 0342
Salary = U$ 120000.00*/
#include<stdio.h>
int main()
{
    int h;
    char id[10];
    double s,sh;
    printf("please enter the id :\n");
    scanf("%s",&id);
    printf("Enter the hour:\n");
    scanf("%d",&h);
    printf("Enter the working hour :");
    scanf("%lf",&sh);

    s=h*sh;
    printf("\nEmployeers ID = %s\nsalary = U$ %.2lf",id,s);
    return 0;

}
