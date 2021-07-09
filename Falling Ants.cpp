
#include<bits/stdc++.h>
using namespace std;
int main()
{

    for(int n;scanf("%d",&n)==1 && n;)
    {
        int L,W,H,maxH=0,maxV=0,vol;


     while(n--)
     {

            cin>>L>>W>>H;
            vol = L*W*H;
            if((H==maxH&&vol>maxV) || H>maxH)
            {
                maxV = vol;
                maxH = H;
            }

        }
        cout<<maxV<<endl;
    }
    return 0;
}
