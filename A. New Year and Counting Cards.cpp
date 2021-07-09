#include<bits/stdc++.h>
using namespace std;
int main()
{
    string arr;
    cin>>arr;
    int l = arr.size();
    int cnt=0;
    for(int i=0;i<l;i++)
    {
        if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'||arr[i]=='1'||arr[i]=='3'||arr[i]=='5'||arr[i]=='7'||arr[i]=='9')
            cnt++;
    }
    cout<<cnt<<endl;
}

