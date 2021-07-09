#include<stdio.h>
#include<conio.h>
int y(int n);
int main()
{
    int x=y(10);
    printf("Final output =%d",x);
    getch();

}
int y(int n)
{
    printf("The function with the ardgument %d\n",n);
    if(n==0)
    {
        printf("In terminating condition=%d\n",n);
        return n;
    }
    else
    {
        printf("In recurdive function is called with %d\n",(n-2));
        return n+y(n-2);
    }
    printf("CSE %d Times\n",n);
}
