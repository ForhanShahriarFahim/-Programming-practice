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
    int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	    cin>>a[i];

    int sum=0;
    int num=n-1;
    while(num>=1)
    {
        if(num==1)
        {
            sum+=abs(a[num]-a[num-1]);
            num=num-1;
        }

       else if(abs(a[num]-a[num-1]<abs(a[num]-a[num-2])))
       {
           sum +=abs(a[num]-a[num-1]);
           num=num-1;
       }

       else
        {
           sum+=abs(a[num]-a[num-2]);
           num=num-2;
       }
    }
    cout<<sum<<endl;

    return 0;
}




