#include <stdio.h>

int main()

{
    int n , i, a ,b;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a ,&b);
        if((a-1)%(b-1)!=0)
        printf("cannot do this\n");
        else
        printf("%d\n",(a-1)/(b-1));
    }
    return 0;
}
