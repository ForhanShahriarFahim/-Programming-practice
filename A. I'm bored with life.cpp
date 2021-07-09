#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,k;
    cin>>a>>b;
    long long int sum=1;
    k = min(a,b);
    for(int i=1;i<=k;i++)
    {
        sum*=i;
    }
    cout<<sum<<endl;
    return 0;

}
