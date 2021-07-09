#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,k,sum=0,cnt=0;
    int test;
    cin>>test;
    while(test--)
    {
        sum=0;

        cin>>n>>k;
        while(n!=0)
        {
            cnt=0;

        if(n%k!=0)
        {
            cnt = n%k;
            //cout<<"cnt value : "<<cnt<<endl;
            sum+=cnt;
            n = n-cnt;
        }
        else
        {

            n = n/k;
           // cout<<"div : "<<n<<endl;

            sum+=1;
           // cout<<"value of sum : "<<sum<<endl;
        }

        }
        cout<<sum<<endl;
    }

}
