#include<bits/stdc++.h>
using namespace std;
int main()
{
    ll n;
    cin>> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll q;
    cin>>q;
     ll x;
    for (int i = 0; i < q; i++)
    {
        cin >> x;
        cout<<upper_bound(arr,arr+n,x)-arr<<endl;
    }
}
