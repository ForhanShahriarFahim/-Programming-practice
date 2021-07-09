#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char arr[110],t[110];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>t[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
        cout<<t[i];
    }

    cout<<endl;

    //s.append(t);

    return 0;
}
