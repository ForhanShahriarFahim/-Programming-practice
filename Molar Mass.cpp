#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string a;
    double weight[] = {12.01,1.008,16.00,14.01};
    scanf("%d",&t);
    while(t--)
    {
        double total_Weight = 0.0;
        cin>>a;
        for(int i=0;i<a.size();i++)
        {
        double total = 0.0;
        if(a[i]=='C')
            {
                double result = 0.0;
                while(a[i+1]>'0' && a[i+1]<='9')
                {
                    result = result*10+a[i+1]-'0';
                    i++;
                }
                if(result!=0)
                {
                    total = result*weight[0];
                }
                else
                    total = weight[0];
            }
        if(a[i]=='H')
            {
                double result = 0.0;
                while(a[i+1]>'0' && a[i+1]<='9')
                {
                    result = result*10+a[i+1]-'0';
                    i++;
                }
                if(result!=0)
                {
                    total = result*weight[1];
                }
                else
                    total = weight[1];
        }
        if(a[i]=='O')
            {
                double result = 0.0;
                while(a[i+1]>'0' && a[i+1]<='9')
                {
                    result = result*10+a[i+1]-'0';
                    i++;
                }
                if(result!=0)
                {
                    total = result*weight[2];
                }
                else
                    total = weight[2];
    }
    if(a[i]=='N')
            {
                double result = 0.0;
                while(a[i+1]>'0' && a[i+1]<='9')
                {
                    result = result*10+a[i+1]-'0';
                    i++;
                }
                if(result!=0)
                {
                    total = result*weight[3];
                }
                else
                    total = weight[3];

          }
          total_Weight+=total;

        }

        printf("%.3lf\n",total_Weight);

    }
    return 0;
}
