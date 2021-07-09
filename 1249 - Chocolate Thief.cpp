#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;


    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int a,b,c,n,j,min = 99999999,max = 0,value1,value2;
        scanf("%d",&n);
        char arr[n][100];
        int sum[n];
        for(j=0;j<n;j++)
        {

        scanf("%s",arr[j]);
        cin>>a>>b>>c;

        sum[j] = a*b*c;
        if(max<sum[j])
        {
            max = sum[j];
            value1 = j;
        }
        if(min>sum[j])
        {
            min = sum[j];
            value2 = j;
        }
      }
      if(value1==value2)
      {
          printf("Case %d: no thief\n",i);

      }
      else
      {
          printf("Case %d: %s took chocolate from %s\n",i,arr[value1],arr[value2]);
      }

    }
    return 0;

}
