#include<stdio.h>
int main()
{
    float n;
    int a,b,c,d,e,f,g,h,i,j,remainder,remainder3,remainder4,remainder5,remainder1,remainder2;
    scanf("%.2f",&n);
    float k;
    k=n-(int) n;
    a=n;
    remainder=a%100;
    a=a/100;
    b=remainder/50;
    remainder1=remainder%50;
    c=remainder1/20;
    remainder2=remainder1%20;
    d=remainder2/10;
    remainder3=remainder2%10;
    e=remainder3/5;
    remainder4=remainder3%5;
    f=remainder4/2;
    //printf("%d",remainder4);
      int a1,b1,c1,d1,e1,f1,g1,h1,i1,j1,r1,r2,r3,r4,r5,r6;
      a1=remainder4/1;
       k=k*100;


        b1=(int)k/50;
        r1=(int)k%50;
        c1=r1/25;
        r2=r1%25;
        d1=r2/10;
        r3=r2%10;
        e1=r3/5;
        r4=r3%5;
        f1=r4/1;
        printf("%d",r3);









}
