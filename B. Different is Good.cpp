#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pi acos(-1.0)
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    string str;
    cin>>str;
    int cnt = 0,arr[9999] = {0};
    if(n<=26)
    {


    for(int i=0;i<n;i++)
    {
       if(arr[str[i]]==0)
       {
           arr[str[i]]++;
       }
       else
        cnt++;
    }
    cout<<cnt<<endl;

    }
    else
        cout<<"-1"<<endl;

}
