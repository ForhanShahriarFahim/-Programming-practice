#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int q,arr[100],ans;
    cin>>q;
    while(q--)
    {
        for(int i=0;i<3;i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+3);
       /* for(int i=0;i<3;i++)
            cout<<arr[i]<<endl;*/

        if(arr[0]==arr[1]&&arr[1]==arr[2])
            cout<<"0"<<endl;
        else if(arr[0]==arr[1]&&arr[1]!=arr[2])
        {
            ans = (((arr[2]-1)-(arr[0]+1))+((arr[2]-1)-(arr[1]+1)));
            if(ans<0)
                cout<<"0"<<endl;
            else
            cout<<ans<<endl;
        }
        else if(arr[0]!=arr[1]&&arr[1]==arr[2])
        {
            ans = (((arr[2]-1)-(arr[0]+1))+((arr[1]-1)-(arr[0]+1)));
            if(ans<0)
                cout<<"0"<<endl;
            else
            cout<<ans<<endl;
        }
        else if(arr[0]!=arr[1]&&arr[1]!=arr[2])
        {
            ans = (((arr[2]-1)-arr[1])+((arr[2]-1)-(arr[0]+1))+(arr[1]-(arr[0]+1)));
            cout<<ans<<endl;
        }
    }
}
