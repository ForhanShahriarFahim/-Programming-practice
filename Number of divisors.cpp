#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define r(a) cin>>a;
bool  prime[1000001];
void sv(){
    memset(prime,true,sizeof(prime));
    for(ll i=2;i*i<=1000000;i++){
        if(prime[i]==true){
            for(ll j=2*i;j<=1000000;j+=i){
                prime[j]=false;
            }
        }
    }
}

int main(){
    ll i,h,j,k,t,n;
    r(t);
    sv();
    vector<ll> v;
    for(i=2;i<1000001;i++){
        if(prime[i]==true)v.push_back(i);
    }
    while(t--){
        r(n);
        ll ans=1;
        for(i=0;i<v.size();i++){
            ll curr=0;
            while(n%v[i]==0){
                n/=v[i];
                curr++;
            }
            ans*=(curr+1);
        }
        cout<<ans<<endl;
    }
}
