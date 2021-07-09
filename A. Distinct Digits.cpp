#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r;
    cin>>l>>r;
    for(int i=l;i<=r;i++)
    {
        set<int> arr;
        int x = i,cnt = 0;
        while(x)
        {
            arr.insert(x%10);
            x/=10;
            cnt++;
        }
        if(arr.size()==cnt)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
}

