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
    //c_p_c();
    FastIO;
    string str;
    cin>>str;
    int odd = 0,index;
    int len = str.size();
    int minimum = 999999;
    char s = str[len-1];
    //cout<<len<<endl;
   // cout<<s<<endl;
    for(int i = 0;i<len;i++)
    {
        //int con = str[i]-'0';
        if(str[i]%2==0)
        {

            if(str[i]>str[len-1] /*&& con<=minimum*/)
            {
               // cout<<" str i "<<str[i]<<endl;
                index=i;
               // cout<<index<<endl;
                //minimum = con;
                //cout<<"min "<<minimum<<endl;
            }

            else if(str[i]<str[len-1])
            {

                str[len-1] = str[i];
                str[i] = s;
                cout<<str<<endl;
                return 0;
            }

        }
        else
        {
            odd++;
        }

    }

      if(odd == len)
        {
            cout<<"-1"<<endl;
        }
     else
        {
            str[len-1] = str[index];
            str[index] = s;
            cout<<str<<endl;
        }
}


