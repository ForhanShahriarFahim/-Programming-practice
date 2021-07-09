//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
//long long ko?
#include<bits/stdc++.h>
#pragma GCC optimize("O3")
#define SPEED ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0)
#define all(v) (v).begin(),(v).end()
#define OK cout<<"OK"<<endl<<flush
#define lb lower_bound  //x<=
#define ub upper_bound  //x<
#define ll long long
#define pii pair<int,int>
#define pb push_back
#define F first
#define S second
#define endl '\n'
using namespace std;

int n, x, a[105],ans, ones;
int main()
{
    SPEED;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            ones=0;
            for(int k=0; k<n; k++)
            {
                if(k>=i and k<=j)
                {
                    if(!a[k])
                    {
                        ones++;
                        cout<<"vlaue of i j & k : "<<i<<" "<<j<<" "<<k<<endl;
                        cout<<"value of ones : "<<ones<<endl;
                    }

                }
                else
                {
                    if(a[k])
                    {
                        ones++;
                        cout<<"vlaue of else i j & k : "<<i<<" "<<j<<" "<<k<<endl;
                        cout<<"value of else ones : "<<ones<<endl;

                    }

                }
            }
            ans=max(ans,ones);
            cout<<"ans : "<<ans<<endl;
        }
    }
    cout<<ans;
    return 0;
}
