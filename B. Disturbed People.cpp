#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,cnt=0;
    cin>>n;
    int arr[n]={0};
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n;i++)
    {
        //cout<<"Latest i : " <<i<< " "<<endl;
        if((arr[i]==0&&arr[i-1]==1)&&(arr[i]==0&&arr[i+1]==1))
        {



            cnt++;
           // cout<<"Count value :"<<cnt<<endl;
            arr[i+1]=0;
            //cout<<i<<" ";
        }



    }
    cout<<cnt<<endl;

}
