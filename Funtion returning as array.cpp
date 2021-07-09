#include<bits/stdc++.h>
using namespace std;
int* demo()
{
    static int a[5];
    for(int i=0;i<5;i++)
    {
        a[i] = i;
    }
    return a;
}
int main()
{
    int *p;
    p = demo();
    for(int i=0;i<5;i++)
    {
        cout<<*(p+i)<<" ";
    }
}
