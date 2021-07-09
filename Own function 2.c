#include<stdio.h>
void fun2(void);
int main(void)
{
    fun2();
    printf("3");
return 0;
}
fun2()
    {
        fun1();
        printf("2");
    }
    fun1()
    {
     printf("1");
    }

