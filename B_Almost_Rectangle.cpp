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



void solve()
{
    int n;
    bool flag1=true,flag2=true,fla;
    int row1,col1,row2,col2;
    cin>>n;
    char arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]== '*' && flag1)
            {
                flag1 = false;
                
                row1 = i;
                col1 = j;
            }
             else if (arr[i][j] == '*' && flag2 && flag1==false )
            {
                flag2 = false;
                row2 = i;
                col2 = j;
            }
        }
    }
    //cout<<"row1 "<<row1<<" row2 "<<row2<<endl;
    if((row1!=row2) && (col1!= col2))
    {
        arr[row2][col1] = '*';
        arr[row1][col2] = '*';
    }
    else if(row1==row2)
    {
        if(row1+1<n)
        {
            arr[row1+1][col1] = '*';
            arr[row2+1][col2] = '*';
        }
        else 
        {
            arr[row1 -1][col1] = '*';
            arr[row2 - 1][col2] = '*';
        }
    }
    else if(col1==col2)
    {
        if (col1 + 1 < n)
        {
            arr[row1][col1+1] = '*';
            arr[row2][col2 + 1] = '*';
        }
        else
        {
            arr[row1][col1-1] = '*';
            arr[row2][col2-1] = '*';
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    //cout<<endl;


}



int main(int argc, char const *argv[])
{
    c_p_c();
    FastIO;
    int t = 1;
    cin>>t;
    for (int i = 0; i < t; i++)
        solve();
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}
