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
    int n;
    cin>>n;
    ll arr[n],s[n],pk = 0,mx = INT_MAX,mn = INT_MIN,index1=INT_MAX,index2=0,index3,cnt=0,ok=0;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        s[i] = arr[i];
       /*  if(arr[i]<=mx)
        {
            
            mx = arr[i];
            index1 = min(index1,i);
            index2 = max(index2,i);
            
        } */
        if(arr[i]>=mn)
        {
            mn=arr[i];
            cnt++;
            if(cnt==n)
            {
                cout<<"yes"<<endl;
                cout<<"1 "<<"1"<<endl;
                return 0; 
            }
        }      
        

    }
   /*  if (index1 == 0 && index2 == n - 1)
    {
        cout << "yes" << endl;
        cout << index1 + 1 << " " << index2 + 1 << endl;
        return 0;
    } */
    for(ll i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            index1 = min(i-1,index1);
            if(i==n-1)
            {
                index2 = i+1;
                ok = 0;
            }
            pk = 1;
        }
        else if(arr[i]>=arr[i-1])
        {
            
            index2 = i;
          
            if (pk)
                break;
        }
    }
    
    sort(arr, arr + n);
    //cout << "index :"<<index1 <<" "<<index2<< endl;
   
    reverse(s + index1, s + (index2));
    
  /*   for(int i=0;i<n;i++)
    {
        cout<<s[i]<<" ";
    } */ 

    
    int k=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==s[i])
        {
            k++;
        }
        else 
        {
            cout<<"no"<<endl;
            return 0;
        }
    }
    if(k==n)
    {
        cout<<"yes"<<endl;

        cout<<index1+1<<" "<<index2<<endl;
    }
}

