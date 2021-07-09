#include<stdio.h>
register int n;
int main()
{


    while(1)
    {
        scanf("%d",&n);

        switch(n)
        {
        case 1:
            printf("0 0\n");
            break;
        case 2:
             printf("0 1\n");
             break;
        case 3:
            printf("-1 1\n");
            break;
        case 4:
            printf("-1 0\n");
            break;
        case 5:
            printf("0 -1\n");
            break;
        case 6:
            printf("1 -1\n");
            break;
        case 7:
            printf("1 0\n");
            break;
        case 8:
            printf("1 1\n");
            break;
        case 9:
            printf("0 2\n");
            break;
        case 10:
            printf("-1 2\n");
            break;
        case 11:
            printf("-2 -2\n");
            break;
        case 12:
            printf("-2 1\n");
            break;
        case 13:
            printf("-2 0\n");
            break;
        case 14:
            printf("-1 -1\n");
            break;
        case 15:
            printf("0 -2\n");
            break;
        case 16:
            printf("1 -2\n");
            break;
        case 17:
            printf("2 -2\n");
            break;
        case 18:
            printf("2 -1\n");
            break;
        case 19:
            printf("2 0\n");
            break;
        case 20:
            printf("2 1\n");
            break;
        case 21:
            printf("1 2\n");
            break;
        case 22:
            printf("0 3\n");
            break;
        case 23:
            printf("-1 3\n");
            break;
        }

    }
}
