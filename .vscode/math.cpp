//Codeforces 😣😡😡😡😡
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
int test;
    cin>>test;
    int code,forces;
    while(test--){
        cin>>code;
        if(code%7==0) 
            cout<<code/7<<endl;
        else 
        cout<<(code/7+1)<<endl;        
    }
    return 0;
}
