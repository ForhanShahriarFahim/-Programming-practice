#include<bits/stdc++.h>
#include<numeric>
using namespace std;
int main()
{
    long long int a,b,mul;
    cin>>a>>b;
    mul= a*b;
    int gcd;
    gcd=__gcd(a,b);
    long long int lcm;
    lcm = mul/gcd;
    cout<<lcm<<endl;
    return 0;
}
