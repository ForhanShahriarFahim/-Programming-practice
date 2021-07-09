#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double n,sum=0;
    cin>>n;
    for(double i=1;i<=n;i++)
    {
        sum+=1/i;
    }
    cout<<fixed<<setprecision(12)<<sum<<endl;

}
