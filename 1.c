#include<stdio.h>
int main()
{
    int a,b=0,c=0,i;
    char x;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
    scanf("%c", &x);
    //6
   // printf("%c %d\n",x,i);
    if(x=='A'){

            b++;
           // printf("%d\n",b);

    }
    else {
        c++;
    }
    }
    printf("%d %d\n",b,c);
    if(b>c){printf("Anton\n"); }
    else if(b<c){printf("Danik\n"); }
    else {printf("Friendship\n");}
    return 0 ;
}
