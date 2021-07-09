#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long int a,b,low,high,dif;
    cin>>n;
    while(n--)
    {
        int count=0;
        int k=1;
        cin>>a>>b;
        low = min(a,b);
        high=max(a,b);
        dif=high-low;
        if(dif==0)
        {
            printf("%d\n",dif);


        }
        else{

        for(int i=1;;i++)
        {

            int p = (i*(i+1))/2;
            if(p==dif)
            {
                printf("%d\n",i);
                break;
            }
            else
            {
                if(i%2!=0)
                {
                    low+=i;
                }
                else
                    high+=i;
                if(low==high)
                {
                    printf("%d\n",i);
                    break;
                }
            }
        }

        }
        }



    }

