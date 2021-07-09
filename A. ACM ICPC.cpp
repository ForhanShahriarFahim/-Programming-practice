#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6],sum=0;
    for(int i=0;i<6;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }

    //calculating all possible sum
    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            for(int k=j+1;k<6;k++)
            {
                if(arr[i]+arr[j]+arr[k]==(sum-(arr[i]+arr[j]+arr[k])))
                   {
                       cout<<"YES"<<endl;
                       return 0;
                   }


            }
        }
    }
    cout<<"NO"<<endl;
}
