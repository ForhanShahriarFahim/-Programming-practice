#include<stdio.h>
int main()
{
float n1,n2,n3,n4,n5,a,ave;
scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
ave=((n1*2)+(n2*3)+(n3*4)+n4)/10;
printf("Media: %.1f\n",ave);
if(ave>=7)
    {
    printf("Aluno aprovado.\n");
    }else if(ave<5)
        {
        printf("Aluno aprovado.\n");
        }
        else if(ave>=5&&ave<=6.9)
            {
            printf("Aluno em exame.\n");
            scanf("%f",&n5);
            printf("Nota do exame: %.1f\n",n5);
            a=(ave+n5)/2;
            if(a>=5)
                printf("Aluno aprovado.\n");

                else if(a<=4.9){
                printf("Aluno reprovado.\n");
                }
                printf("Media final: %.1f\n",a);

            }
            return 0;
}

