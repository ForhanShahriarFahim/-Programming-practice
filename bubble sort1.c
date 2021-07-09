#include<stdio.h>
int main()
{ int i,A[]={5,7,2,9,1},round,temp,n;
for(i=0;i<=4;i++)
{
    printf("%d,",A[i]);
    for(round=1;round<=i-1;round++){
        for(i=0;i<n-1-round;i++){
                if(A[i]>A[i+1])
                {
                   temp=A[i];
                   A[i]=A[i+1];
                   A[i+1]=temp;
                }

        }
    }

}




    return 0;
}
