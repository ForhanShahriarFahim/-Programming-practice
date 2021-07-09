#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {

        cin>>n;
        int a[n],b[n],i,d,c=0,max=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];

        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(int j=0;j<n;j++)
        {
            if(a[j]==b[j])
            {
                continue;
            }

            else if((a[j]-b[j])>0)
            {
               printf("NO\n");
               break;
            }

            else if(b[j]>a[j])
            {
                d = b[j]-a[j];
                if(d>max)
                {
                max = d;
                if(max!=d)
                {
                    printf("NO\n");
                   break;
                }
                c++;
              }


            }


        }

    }
    return 0;
}
