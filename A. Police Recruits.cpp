#include<iostream>
using namespace std;
int main()
{
  int b=0,cnt=0,sum=0,n;
    cin>>n;
  for(int i=0;i<n;i++)
   {
     cin>>b;
     sum+=b;
     if(sum<0)
     {
        sum=0;
        cnt++;
     }
  }
cout<<cnt;
return 0;
}
