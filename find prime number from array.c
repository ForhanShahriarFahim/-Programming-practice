#include<stdio.h>
int main()
{
    int i,j,n,f,a[5];
    printf("Enter the positive numbers\n");
    for(i=0;i<5;i++)

        scanf("%d",&a[i]);
    for(i=0;i<5;i++){

        f=0;
       n=a[i];

        for(j=2;j<n;j++){
                if(n%j==0){
                        f=1;
                break;
                }
        }
                if (f==0)
                    printf("%d is   prime num\n",n);

    }
    return 0;

    }

