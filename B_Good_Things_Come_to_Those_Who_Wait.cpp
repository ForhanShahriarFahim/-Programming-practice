#include <bits/stdc++.h>
using namespace std;

//**************************************************************************************************************************************************************************
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;


int main(int argc, char const *argv[])
{
    
    ll t;
    cin>>t;
    for(ll j=1;j<=t;j++)
    {
        ll k;
        cin >> k;
        ll ans = 1, a;

        if (k == 1)
        {
            cin >> a;
            cout << "Case"<< " " << j << ":"<< " " << a*a << endl;
        }
        else
        {
            for (int i = 0; i < k; i++)
            {
                cin >> a;
                if(i==0)
                ans*=a;
                if(k-1==i)
                {
                    ans*=a;
                } 
            }
            cout << "Case"<<" " <<j<<":" <<" "<<ans << endl;
        }
    }
}

