#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
#define pi acos(-1.0)
#define FastIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(int argc, char const *argv[])
{
   FastIO;
   int test;
   cin>>test;
   while(test--)
   {
        int arr[500];
        int n,x,dif=0,cnt=0;

        cin>>n>>x;
        for(int i=1;i<=n;i++)
        {

            cin>>arr[i];
        }
        arr[0] = 1;

        sort(arr,arr+(n+1));
       // for(int i=0;i<=n;i++)
         //   cout<<arr[i]<<endl;

        for(int i=1;i<=n;i++)
        {
            dif = arr[i]-arr[i-1];
           // cout<<"Value of dif : "<<dif<<endl;
            if(dif==0)
            {
                if(i==n)
                {
                    if(arr[i]==1)
                    {
                       cout<<(arr[i])+x<<endl;
                    break;
                    }
                    else
                    {
                        cout<<(arr[i]-arr[i-1])+x<<endl;
                        break;
                    }

                }

                continue;
            }

            else if(x==dif)
            {
                x = x-(dif-1);
               // cout<<"value of x : "<<x<<endl;
            }
            else if(x<dif)
            {
                if(arr[i]-(arr[i-1]+(x+1))==1)
                {
                    cout<<arr[i-1]+(x+2)<<endl;
                    break;
                }
                //cout<<"in the low"<<endl;
                cout<<arr[i-1]+(x+1)<<endl;
                break;
            }
            else if(x>dif)
            {
                x = x-dif;
                if(x==1)
                {
                    cout<<arr[i]+x<<endl;
                    break;
                }
            }

        }
   }

}
