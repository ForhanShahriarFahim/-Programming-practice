#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,cont=0;
    cin>>n;
    string arr[n+5];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<"YES"<<endl;
                cont = 1;
                break;
            }

            else
            {
                cont = 0;
            }
        }

        if(cont = 0)
            cout<<"NO"<<endl;

    }
    return 0;


}
