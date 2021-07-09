//Good one🐀򒠀🐀򒠀🐀򐠀
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
   int test,n;
   string arr;
   cin>>test;
   while(test--)
   {

       int sum=0,cnt=0,flag1=-1,flag2=-1,checker = 0;
       cin>>n;
       cin>>arr;
       if(arr[0]=='1' || arr[n-1] == '1')
       {
           cout<<n*2<<endl;

       }
       else{

       for(int i=0;i<n;i++)
       {
           if(arr[i]=='1' && checker==0)
           {
               flag1 = i;
               checker = 1;
           }
           else if(arr[i]=='1' && checker ==1)
           {
               flag2 = i;
               //continue;
           }
       }

       if(checker == 1 && flag2 == -1)
       {
           flag2 = flag1;
       }
       else if(checker==0)
       {
           cout<<n<<endl;
           continue;
       }
       if(((n-1)-flag1)>flag2)//displaying from the back
       {
            cout<<(n-flag1)*2<<endl;
       }
       else//displaying from the front
       {
           cout<<(flag2+1)*2<<endl;
       }
   }

   }
}
