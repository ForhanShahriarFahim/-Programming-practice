#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,max=0;
    string s;
    cin>>n;
    cin>>s;
    string sub_string;
    for(int i=0;i<n-1;i++)
    {
        int cnt=0;
        for(int j=0;j<n-1;j++)
        {
            if(s[j]==s[i]&&s[j+1]==s[i+1])
            {
                cnt++;
            }
            if(cnt>max)
            {
                max=cnt;
                sub_string=string(1,s[i])+string(1,s[i+1]);
            }
        }
    }
    cout<<sub_string<< endl;
    return 0;
}
