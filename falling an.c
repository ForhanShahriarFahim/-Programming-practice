#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test)
    {
        int L,W,H,a=0,max=0,vol;

        for(i=0;i<test;i++)
        {
            cin>>L>>W>>H;
            vol = L*W*H;
            if(vol>max && H>a)
            {
                max = vol;
                H = a;
            }
            cin>>max>>endl;
        }
    }
}
