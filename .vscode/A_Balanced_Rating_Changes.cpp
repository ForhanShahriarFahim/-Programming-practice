#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
#define pi acos(-1.0)
#define FastIO                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

int main(int argc, char const *argv[])
{
    FastIO;
    int n;
    cin>>n;
    double arr;
    ll sum = 0,div;
    int cnt = 0;

    for(int i=0;i<n;i++)
    {
        cin>>arr;
        if (arr % 2 == 0)
        {
            cout << arr / 2 << endl;
        }
            
        else
        {
            double m = arr;
            if (cnt % 2 == 0)
            {
                cout << ceil(m/ 2) << endl;
                cnt++;
            }
            else
            {
                cout << floor(m / 2) << endl;
            }
        }
   // bool checker = 0;
   // int cnt = 0;
    /*for(int i=0;i<n;i++)
    {
      if(arr[i]%2==0)
      cout<<arr[i]/2<<endl;
      else
      {
          if(cnt%2==0)
          {
              cout<<ceil(arr[i]/2)<<endl;
              cnt++;
          }
          else
          {
              cout<<floor(arr[i]/2)<<endl;
          }
          
      }
    

    }*/
}