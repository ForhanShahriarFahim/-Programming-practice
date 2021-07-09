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
    int t,n,m,a;
    cin>>t;
    string s;
    for(int i=1;i<=t;i++)
    {
        cout << "Case "<<i<<":"<<endl;
        deque<int> q;
        cin>>n>>m;
        q.clear();
        while(m--)
        {
            cin>>s;
            if(s=="pushLeft")
            {
                cin>>a;
                if(q.size()==n)
                {
                    cout << "The queue is full"<<endl;
                }
                else 
                {
                    cout << "Pushed in left: "<<a<<endl;;
                     q.push_front(a);
                }
            }
            else if(s=="pushRight")
            {
                cin>>a;
                if(q.size()==n)
                {
                    cout<<"The queue is full"<<endl;
                }
                else 
                {
                    cout<<"Pushed in right: "<<a<<endl;
                    q.push_back(a);
                }
            }
            else if (s == "popLeft")
            {
                if(q.empty())
                {
                    cout << "The queue is empty"<<endl;
                }
                else 
                {
                    cout<<"Popped from left: "<< q.front()<<endl;
                    q.pop_front();
                }
            }
            else if (s == "popRight")
            {
                if(q.empty())
                {
                    cout<<"The queue is empty"<<endl;
                }
                else 
                {
                    cout << "Popped from right: "<<q.back()<<endl;
                    q.pop_back();
                }
            }
        }

    }
}

