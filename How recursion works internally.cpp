#include <bits/stdc++.h>
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
#define pi acos(-1.0)
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
// Finding the factorial of a number using recursion
int factorial(int n)
{
    if(n>1)
    {
        return n*factorial(n-1);
    }
    else
        return 1;
}
int main(int argc, char const *argv[])
{
   FastIO;
   cout<<"Factorial : "<<factorial(4);
   return 0;
}
