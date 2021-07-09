#include<bits/stdc++.h>
using namespace std;
int main()
{
    int flat,floor,cnt=0,arr[100000];
    cin>>flat>>floor;

        for(int i=0;i<flat;i++)
        {

        for(int j=0;j<2*floor;j++)
        {
            cin>>arr[j];
            if((arr[j]!=arr[j+1])||(arr[j]==1 && arr[j+1]==1))
            {
              cnt++;
              j++;

            }


        }
    }

    cout<<cnt<<endl;
    return 0;
}
