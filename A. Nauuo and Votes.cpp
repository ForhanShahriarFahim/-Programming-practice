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
    ll x,y,z;

    cin >>x>>y>>z;

    if(x+z<y){
        cout << "-";
        return 0;
    }
    if(y+z<x){
        cout << "+";
        return 0;
    }
    if(x==y &&z==0){
        cout <<0;
        return 0;
    }
    cout <<"?";

}
