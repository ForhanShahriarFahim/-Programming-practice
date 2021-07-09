#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    long long int x[n],sum=0,cnt=0,odd=0;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    sort(x,x+n,greater<int>());
    for(int i=0;i<n;i++)
    {


        if(x[i]%2==0)
        {
            sum+=x[i];
           // cout<<"SUM : "<<sum<<endl;
        }
        else
        {
            cnt++;
            odd+=x[i];
           // cout<<"ODD : "<<odd<<endl;
            if(cnt%2==0)
            {
               sum+=odd;
               //cout<<"ODD SUM : "<<sum<<endl;
               cnt=0;
               odd=0;
            }
        }

    }

    cout<<sum<<endl;


}
