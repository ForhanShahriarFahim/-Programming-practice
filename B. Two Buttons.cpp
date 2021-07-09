#include <bits/stdc++.h>
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
#define pi acos(-1.0)
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(int argc, char const *argv[])
{
   FastIO;
   int n,m,cnt=0;
   cin>>n>>m;
   if (n>=m)
    {
		cout <<n-m<<endl;;
	}
	else
	{
		cnt=0;
		while(n!=m)
        {
            if(m%2==0)
            {
                m/=2;
                cnt++;
            }
            else
            {
                m = (m+1)/2;
                cnt+=2;
            }
            if(n>=m)
            {
                cnt+=(n-m);
                m = n;
            }
        }
        cout<<cnt<<endl;
	}
}
