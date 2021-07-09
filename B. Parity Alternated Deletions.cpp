// @ author : Forhan Shahriar Fahim
// Created : 3/23/2020
//Don't go to school college or anywhere stay at home 🐀򐠀
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n],even[n],odd[n],o=0,e=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            even[e] = arr[i];
            e++;
        }
        else
        {
            odd[o] = arr[i];
            o++;
        }

    }
    int sum = 0;
    if(o == e)
        cout<<sum<<endl;
     else if(o>e)
    {
        int k = o-(e+1);
        sort(odd,odd+o);
        for(int i=0;i<k;i++)
        {
            sum =0;
            sum+=odd[i];
        }
        cout<<sum<<endl;
    }
    else if(e>o)
    {
        int k =e-(o+1);
        sort(even,even+e);
        for(int i=0;i<k;i++)
        {
            sum+=even[i];
        }
        cout<<sum<<endl;
    }
}
