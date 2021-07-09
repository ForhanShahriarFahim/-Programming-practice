#include<bits/stdc++.h>
using namespace std;

vector<int>vt;
int divs[1009];
int NOD(int n)
{
    int count = 0;
    for(int i=1;i<=sqrt(n);i++)
  {
     if(n%i==0)
     {
        if(n/i==i)
          count++;
       else
          count+=2;
     }
  }
    return count;
}
int main()
{
    int test,num;
    scanf("%d",&test);
    for(int i=1; i<=1000; i++)
    {
        divs[i] = NOD(i);
    }
    for(int i=1; i<=32; i++)
    {
        for(int j=1000; j>=1; j--)
        {
            if(divs[j]==i)
                vt.push_back(j);
        }
    }
    for(int i=1; i<=test; i++)
    {
        scanf("%d",&num);
        printf("Case %d: ",i);
        cout<<vt[num-1]<<endl;
    }

    return 0;
}
