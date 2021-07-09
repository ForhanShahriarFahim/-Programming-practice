#include<bits/stdc++.h>
using namespace std;
vector<int>vt;
int divisor[1005];
int numOfDivisor(int n)
{
    int count = 0;
    //counting number of divisor
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
    int test;
    for(int i =1;i<=1000;i++)
    {
        divisor[i] = numOfDivisor(i);
    }
    for(int i=1;i<=32;i++)
    {
        for(int j=1000;j>=0;j--)
        {
            if(divisor[j]==i)
                vt.push_back(j);
        }
    }
    int index;
    cin>>test;
    for(int k=1;k<=test;k++)
    {

        cin>>index;
        printf("Case %d: %d\n",k,vt[index-1]);
    }
}
