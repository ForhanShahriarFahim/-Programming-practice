#include<bits/stdc++.h>
using namespace std;
void sieveOfErathosthenes(int n)
{
    bool prime[n+1];
    //populating array with natural numbers
    memset(prime, true, sizeof(prime));
    for(int p=2;p*p<=n;p++)
    {
        if(prime[p]==true)
        {
            for(int i=p*p;i<=n;i+=p)
                prime[i]=false;
        }
    }
    for(int p=2;p<=n;p++)
     if(prime[p])
        cout<< p << " ";
}
int main()
{
    int n;
    cin>>n;
    sieveOfErathosthenes(n);
    return 0;
}
