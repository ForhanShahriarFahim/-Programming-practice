#include<bits/stdc++.h>
using namespace std;
int main()
{
    int xr,yr,xw,yw;
    int sum1, sum2;
    scanf("%d %d", &xr, &yr);
    scanf("%d %d", &xw, &yw);
    sum1 = xr * xr + yr * yr;
    sum2 = xw * xw + yw * yw;
    if(sum1 < sum2)
    {
        printf("Russo\n");
    }
    else if(sum1 == sum2)
    {
        printf("Empate\n");
    }
    else
    {
        printf("Wil\n");
    }
    return 0;
}




