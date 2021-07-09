#include<bits/stdc++.h>
using namespace std;
void divisor(int n)
{
    for(int i=1;i<=n;i++)
        if(n%i==0)
            printf("%d ",i);

}
int main()
{
    int n;
    //cin>>"Enter the value of n">>endl;
    scanf("%d",&n);
    divisor(n);
    return 0;
}
