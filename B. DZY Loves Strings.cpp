#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin>>str;
    int k;
    cin>>k;
    vector<int> arr(26);

    for(int i=0;i<26;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    int len = str.length();
    map<char,int>m;
    int max = *max_element(arr.begin(),arr.end());
    for(int i=0;i<26;i++)
    {
        m[char(97+i)]=arr[i];//maping charcter with corrosponding ascii value
    }
    for(int i=0;i<len+k;i++)
    {
        if(i<len)
            sum+=(i+1)*m[str[i]];
        else
            sum+=(i+1)*max;
    }
    cout<<sum<<endl;
}
