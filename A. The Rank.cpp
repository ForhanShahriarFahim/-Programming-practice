#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int cnt=1,flag=0,first;

    while(test--)
    {

        int arr[4],sum=0;
        for(int i=0;i<4;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if(flag==0)
        {
            first=sum;
            flag++;
        }


        if(first<sum)
        {
            cnt++;

        }

    }

    cout<<cnt<<endl;
}
