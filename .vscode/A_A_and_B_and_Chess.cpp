#include <bits/stdc++.h>
using namespace std;

//**************************************************************************************************************************************************************************
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
//**************************************************************************************************************************************************************************
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
#define pi acos(-1.0)
#define eps 1e-9
#define inf 1e18
#define sz(x) (int)((x).size())
#define gcd(a, b) __gcd(a, b)
#define LCM(x, y) (((x) / __gcd((x), (y))) * (y))
#define mem(x, n) memset(x, n, sizeof(x))
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define ps(x, y) fixed << setprecision(y) << x
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//**************************************************************************************************************************************************************************

void c_p_c()
{
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif   
}

int main(int argc, char const *argv[])
{
    c_p_c();    
    FastIO;
    char n;
    int white=0,black=0;
    for(int i=0;i<64;i++)
    {
        cin>>n;
        if(n=='Q')
        white+=9;
        else if(n=='R')
        white+=5;
        else if(n=='B')
        white+=3;        
        else if(n=='N')
        white+=3;
        else if(n=='P')
        white+=1;
        
        else if(n=='q')
        black+=9;
        else if(n=='r')
        black+=5;
        else if(n=='b')
        black+=3;
        else if(n=='n')
        black+=3;
        else if(n=='p')
        black+=1;
              
    }
    if(white>black)
    cout<<"White";
    else if(black>white)
    cout<<"Black";
    else 
    cout<<"Draw";
    return 0;

}

