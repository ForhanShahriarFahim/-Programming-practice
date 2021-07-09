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
#define FastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
//**************************************************************************************************************************************************************************

void c_p_c()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

#define MAX 10000



int Multiply(int x, int result[], int size)
{
    int carry = 0;
    int product, i;

    for (i = 0; i < size; i++)
    {
        product = result[i] * x + carry;
        result[i] = product % 10;
        carry = product / 10;
    }

    //incremet size
    while (carry)
    {
        result[size] = carry % 10;
        carry = carry / 10;
        size++;
    }
    return size;
}

//multiply n with individual digits fo result[]

void power(int x, int n)
{
    int size = 0;
    int result[MAX];
    int temp = x;
    int i;
    while (temp != 0) //initialize result array with x
    {
        result[size++] = temp % 10;
        temp = temp / 10;
    }
    for (int i = 2; i <= n; i++)
    {
        size = Multiply(x, result, size);
    }
    cout<<"x^n = ";

    for(i = size-1;i>=0;i--)
    {
        cout<<result[i];
    }
   // cout<<size<<endl;
}

void factorial(int n)
{
    int res [MAX];
    res[0] = 1;
    int res_size = 1;

    for(int x = 2;x<=n;x++)
    {
        res_size = Multiply(x,res,res_size);
    }
    cout<<"Factorial of the given num: "<<endl;
    for(int i=res_size-1;i>=0;i--)
    {
        cout<<res[i];
    }
    cout<<endl<<res_size<<endl;
}

    int main(int argc, char const *argv[])
{
    //c_p_c();
    FastIO;
    int x, n;
    //cout << "Enter the base value = ";
    cin >> x;
  //  cout << "Enter the exponent value = ";
    cin >> n;
    power(x, n);

    int fac;
    cin>>fac;
    factorial(fac);
}
