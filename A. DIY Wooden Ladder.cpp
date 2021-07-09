#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
#define pi acos(-1.0)
#define FastIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(int argc, char const *argv[])
{
   FastIO;

   int a,b;
    cin >>a>>b;
    if(a<b)
    {
        if(b-a==1)
            cout<<a <<"9 "<<b<<"0";
        else
            cout<<"-1";
    }
    else if(a==b)
        cout<<a <<"1 "<<b<<"2";
    else
    {
        if(a==9 && b==1)
            cout<<a <<" "<< b<<"0";
        else
            cout <<"-1";
    }

}
