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
    map<string,int>m;
    m["Espresso"]= 25;
    m["Cappuchino"] =30;
    m["Tea"] = 20;
   // m.insert(make_pair("Cold coffe",50));
   // m.insert(make_pair("Espresso",180));
  //m["Espresso"] = 180;
    map<string,int>::iterator it = m.begin();
   // m.erase(it);//Erasing element using iterator
    m.erase("Tea");//Erasing elemennt using value

    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<< " "<<it->second<<endl;
    }

    return 0;
}

