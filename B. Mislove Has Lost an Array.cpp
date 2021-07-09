#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,l,r;
    cin>>n>>l>>r;
    int min_sum=0,max_sum=0,sum=1;
    for(int i=0;i<l;i++)
    {
        min_sum+=sum;
        sum*=2;
    }
    min_sum+=(n-l);

    sum=1;
    for(int i=0;i<r;i++)
    {
        max_sum+=sum;
        //cout<<sum<<endl;
        sum*=2;
              //  cout<<"AFTER : "<<sum<<endl;


    }
    max_sum+=(n-r)*sum/2;
    cout<<min_sum<<" "<<max_sum<<endl;
}
