#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,t,a,i;
  cin>>t;
  for(i=0;i<t;i++)
  {
      cin>>n;
      a = (n * (n - 1))/ 2;
      printf("%d",a);
  }
  return 0;
}
