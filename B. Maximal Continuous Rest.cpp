#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt1=0,cnt2=0;
    int n,cnt=0,ans=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {

        if(arr[i]==0)
        {
           ans = max(ans,cnt);
           cnt=0;
        }
        else
        {
          ++cnt;
        }
    }


     for(int i=0;i<n;i++)
          {
              if(arr[i]==0)
              {
                  break;
              }

            ++cnt2;
          }
        for(int j=n-1;j>=0;j--)
          {


              if(arr[j]==0)
              {
                  break;
              }

                ++cnt1;

          }


    cout<<max(ans,(cnt1+cnt2))<<endl;
    return 0;

}
