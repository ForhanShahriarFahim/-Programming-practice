#include<bits/stdc++.h>
#define ll long long int
#define FastRead ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
#define F first
#define S second
using namespace std;
int main()
{
    FastRead;
    ll t,n,k,l,ans=0,i,j,a,b;
    ll c=0;
    map< ll,ll >mp,mp1;
    map<pair< ll,ll >,ll >mp2;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        mp[a]++;
        mp1[b]++;
        mp2[{a,b}]++;
    }
    for(auto i:mp){
        ans+=(((i.S)*(i.S-1))/2);
    }
    for(auto i:mp1){
        ans+=((i.S)*(i.S-1)/2);
    }
    for(auto i:mp2){
        ans-=((i.S)*(i.S-1)/2);
    }
    cout<<ans<<endl;

    return 0;
}
	  		 		 	 		    		 	 	    		