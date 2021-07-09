#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j;
    scanf("%lld",&n);
    for(i=2;i<=sqrt(n)/2;i++)
    {
        if(n%i==0)
        {
          printf("NO\n");
          return 0;
        }
    }
    printf("YES\n");
    return 0;
}
