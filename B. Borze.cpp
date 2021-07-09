#include<bits/stdc++.h>
using namespace std;
int main()
{
    string arr;
    cin>>arr;
    int l = arr.length();
    for(int i=0;i<l;i++)
    {

        if(arr[i]=='-'&&arr[i+1]=='.')
        {
            cout<<"1";
            i++;
        }

        else if(arr[i]=='-'&& arr[i+1]=='-')
        {
            cout<<"2";
            i++;
        }

        else if(arr[i]=='.')
            cout<<"0";
    }
}
