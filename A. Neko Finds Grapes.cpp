#include <bits/stdc++.h>
typedef long long ll;
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
#define pi acos(-1.0)
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define ps(x,y) fixed<<setprecision(y)<<x
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

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
    int sinduk_sonkha,chabir_sonkha,jor=0,bijor=0;

    cin>>sinduk_sonkha>>chabir_sonkha;

    int gupto_don_number,chabir_number;

    for(int suru=0;suru<sinduk_sonkha;suru++)
    {
        cin>>gupto_don_number;

        if(gupto_don_number%2==0)
            jor++;

        else
            bijor++;
    }

    int abar_jor=0,abar_bijor=0;

    for(int suru=0;suru<chabir_sonkha;suru++)
    {
        cin>>chabir_number;

        if(chabir_number%2==0)

            abar_jor++;

        else
            abar_bijor++;
    }

    cout<<min(jor,abar_bijor)+min(abar_jor,bijor)<<endl;
    return 0;


}

