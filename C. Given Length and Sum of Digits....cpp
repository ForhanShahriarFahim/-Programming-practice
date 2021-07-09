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
 int m,s;
  cin >> m>>s;
  if(m*9<s || s==0)
  {
    cout <<"-1"<<" "<<"-1";
    return 0;
  }
  int temp=s;
  int arr[m];
  for(int i=0;i<m;i++)
      {
        arr[i]=0;
      }


    int i=0;
    while(temp>0)
    {
    	while(arr[i]<9 && temp>0)
    	{
    		arr[i]++;
    		temp--;
         //cout<<temp<<endl;
    	}
    	i++;//cout<<" value of i : "<<i<<endl;
    }
    int t=m-1;
    int count=0;
    while(arr[t]==0 && t>=0)
    {
      t--;
      count++;
      //cout<<"value of count :"<<count<<endl;
    }
   // cout<<"value of count :<<count<<endl;
    cout <<arr[m-count-1];
    for(int i=0;i<count;i++)
      {
        cout <<"0";

      }
      if(m-count-1==0)
          cout <<" ";
   for(int i=1;i<m-count-1;i++)
     {
        cout <<arr[i];
     }
   if(arr[m-count-1]!=arr[0]) cout << arr[0]<<" ";
  for(int i=0;i<m;i++)
    {
      cout << arr[i];
    }

  return 0;
}
