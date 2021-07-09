#include<bits/stdc++.h>
using namespace std;
int const MaxN = 100001;
int prime[MaxN];
void sieve()
{
    prime[1] = 1;
    for(int i = 2; i<=MaxN; i++ )
    {
        prime[i] = i;
    }
    for(int i = 4;i<=MaxN;i+=2)
    {
        prime[i] = 2;
    }
    for(int i = 3;i*i<=MaxN;i++)
    {
        if(prime[i] == i)
        {
            for(int j = i*i; j<=MaxN; j+=i)
            {
                if(prime[j] == j)
                {
                    prime[j] = i;
                }
            }
        }
    }
}

vector<int> getFactorization(int x)
{
    vector<int> ret;
    while(x!=1)
    {
        ret.push_back(prime[x]);
        x = x/prime[x];

    }
    return ret;
}

int main()
{
    sieve();
    int x;
    cin>>x;
    cout<<"Prime factorizationg of : "<<x<<endl;

    vector<int> p = getFactorization(x);
    for(int i = 0;i<p.size();i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
}