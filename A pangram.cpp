#include<bits/stdc++.h>
using namespace std;
int main()
{
          int n,i,c=0;
          cin>>n;
          char a[n];
          cin>>a;
          strlwr(a);
          sort(a,a+n);
          if(n<26)
                    cout<<"NO";
 
                    else{
          for(i=0;i<strlen(a);i++)
          {
                  if(a[i]!=a[i+1])
                              c++;
          }
          if(c>=26)
                    cout<<"YES";
          else cout<<"NO";
}
}
