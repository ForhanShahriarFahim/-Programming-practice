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
   int arr[3][3],arr1[3][3];
   for(int i=0;i<3;i++)
   {
       for(int j=0;j<3;j++)
       {
           cin>>arr[i][j];
           arr1[i][j] = 1;
       }
   }
   for(int i=0;i<3;i++)
   {
       for(int j=0;j<3;j++)
       {
           if(arr[i][j]%2!=0)
           {
               if(arr1[i][j]==1)//first
               {
                  // cout<<"i 1nd : "<<i<<" J : "<<j<<endl;
                   arr1[i][j] = 0;
               }
               else if(arr1[i][j]==0)
               {
                  // cout<<"i 1nd else : "<<i<<" J : "<<j<<endl;
                   arr1[i][j] = 1;
               }

           if(arr1[i][j-1]==1 && i>=0 && i<3 && j-1>=0 && j-1<3)//row -1
           {
              // cout<<"i 2nd : "<<i<<" J : "<<j<<endl;
               arr1[i][j-1] = 0;
           }
           else if(arr1[i][j-1]==0 && i>=0 && i<3 && j-1>=0 && j-1<3)
           {
              // cout<<"i 2nd else : "<<i<<" J : "<<j<<endl;
               arr1[i][j-1] = 1;
           }
           if(arr1[i][j+1]==1 && i>=0 && i<3 && j+1>=0 && j+1<3) // row +1
           {
              // cout<<"i 3rd  : "<<i<<" J : "<<j<<endl;
               arr1[i][j+1] = 0;
           }
           else if(arr1[i][j+1]==0 && i>=0 && i<3 && j+1>=0 && j+1<3)
           {
              // cout<<"i 3ed else : "<<i<<" J : "<<j<<endl;
               arr1[i][j+1] = 1;
           }
           if(arr1[i-1][j]== 1 && i-1>=0 && i-1<3 && j>=0 && j<3) //column -1
           {
               arr1[i-1][j] = 0;
           }
           else if(arr1[i-1][j]== 0 && i-1>=0 && i-1<3 && j>=0 && j<3)
           {
               arr1[i-1][j] = 1;
           }
           if(arr1[i+1][j]==1 && i+1>=0 && i+1<3 && j>=0 && j<3)//column +1
           {
               arr1[i+1][j] = 0;
           }
           else if(arr1[i+1][j]==0 && i+1>=0 && i+1<3 && j>=0 && j<3)
           {
               arr1[i+1][j] = 1;
           }
       }
        else//even
       {
           continue;
       }
    }


   }
   for(int i=0;i<3;i++)
   {
       for(int j=0;j<3;j++)
       {
           if(arr1[i][j]==1)
           {
               cout<<1;
           }
           else if(arr1[i][j]==0)
            cout<<0;
       }
       cout<<endl;
   }
   return 0;

}
