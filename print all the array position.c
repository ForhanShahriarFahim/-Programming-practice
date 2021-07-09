#include<stdio.h>
#define p 5
#define max 15
int main()
{
    float a[p];
    int i;
    printf("Input the 5 numbers of the array: \n");
    for(i=0;i<p;i++){
        scanf("%f",&a[i]);
    }
    for(i=0;i<p;i++)
    {
        if(a[i]<max)
        {
            printf("A[%d]=%.1f\n",i,a[i]);
        }
    }
    return 0;
}
