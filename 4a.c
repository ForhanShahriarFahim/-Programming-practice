//#include<stdio.h>
void operation(int *num1,int *num2)
{
    int tempnum;
    tempnum=*num1;
    *num1=*num2;
    *num2=tempnum;
}
int main()
{
    int v1=11, v2=22;
    printf("Before operation:");
    printf("\nValue of v1 is: %d",v1);
    printf("\nValue of v2 is:%d",v2);
    operation(&v1,&v2);
    printf("\nAfter operation:");
    printf("\nValue of v1 is %d",v1);
    printf("\nValue of v2 is %d",v2);

}
