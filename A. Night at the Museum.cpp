#include<bits/stdc++.h>
using namespace std;
int main()
{
    string arr;
    cin>>arr;
    char l = 'a',cont = 0;

    for(int i=0;i<=arr.length()-1;i++)
    {
        cont +=min(abs(l-arr[i]),26-abs(l-arr[i]));
        l = arr[i];
    }
    cout<<cont;
    return 0;
}
