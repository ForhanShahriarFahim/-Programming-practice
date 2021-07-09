#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,arr[200010],t,i;
    cin>>t;
    while(t--)
    {
        int flag=0;
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>arr[i];

        for(int i=1;i<n;i++)
        {
            if(abs(arr[i]-arr[i+1])>1)
            {
                cout<<"YES"<<endl;
                cout<<i <<" "<<i+1<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
        cout<<"NO"<<endl;

    }
    return 0;
}
