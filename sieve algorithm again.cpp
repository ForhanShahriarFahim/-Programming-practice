#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mx = 1000009;
    bool prime[mx];
    prime[1] = false;
    memset(prime,true,sizeof(prime) );
    for(int i =2;i<mx;i++)
    {
        if(prime[i])
        {
            for(int j = i*i;j<mx;j+=i)
            {
                cout<<"value i : "<<i<<"value j : "<<j<<endl;
                prime[j]=false;
            }

        }
    }
    	int q;
	scanf("%d",&q);

	prime[1] = false;

	while(q--){
	long long x;

	scanf("%lld",&x);
	long long  xx = sqrt(x);

	if(xx*xx == x){

		if(prime[xx])
		{
			cout<<"YES\n";
			continue;
		}
	}

	cout<<"NO\n";
}
}
