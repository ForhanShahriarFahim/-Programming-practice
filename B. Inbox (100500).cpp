//@ author : Forhan Shahriar Fahim
//created : 3/23/2020
// Dedecate : Corona Patient
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n],cnt=0,sum=0,zero=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        {
            //cnt++;
            sum+=1;
            if(zero>=1)
            {
                sum+=1;
                zero=0;
            }
        }
        else if(arr[i]==0 && sum!=0)
        {
            zero++;
        }



    }
    cout<<sum<<endl;

}
