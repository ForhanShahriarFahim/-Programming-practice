#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int>v;
double EPS=1e-9;
ll pre[500010],a[500010],sieve[1000001];

int main()
{
    ll n,q;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cin>>q;
    while (q--)
    {
        ll m;
        cin>>m;
        ll st=0,en=n-1;
        while(st<en)
        {
            ll mid=(st+en)/2;
            if(a[mid]>m)en=mid-1;
            else st=mid+1;
        }
        if(st==0&&m<a[0])cout<<0<<endl;
        else{
         if(a[st]<=m)
         {
             cout<<"entering this portion : " ;
             cout<<st+1<<endl;

         }
         else cout<<st<<endl;
        }
    }
 /*ll n,c=0;
cin>>n;
for(int i=1;i<=n;i++)
{
    cin>>a[i];
}
pre[0]=0;
pre[1]=a[1];
for(int i=2;i<=n;i++)
{
    pre[i]=a[i]+pre[i-1];
}

if(pre[n]%3!=0){cout<<0;return 0;}
for(int i=1;i<=n;i++)
{
    if(pre[i]==pre[n]/3){
    ll st=i,en=n;
    while (st<en)
    {
        ll mid=st+(en-st)/2;
        if(pre[mid]-pre[i]<pre[i])st=mid+1;
        else en=mid;
    }
    if(st!=n)c++;
    }
}
cout<<c;*/
return 0;
}
