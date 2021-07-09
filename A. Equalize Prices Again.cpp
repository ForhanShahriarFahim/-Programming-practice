#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        double n,price;
        int last_price;
        cin>>n;
        double sum = 0;
        for(int i=0;i<n;i++)
        {
            cin>>price;
            sum+=price;
        }
        last_price = ceil(sum/n);
        cout<<last_price<<endl;
    }
}
