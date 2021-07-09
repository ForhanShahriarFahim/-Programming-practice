
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pi acos(-1.0)
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    stack<int>mystack;
    mystack.push(1);
    mystack.push(2);
    mystack.push(3);
    mystack.push(4);

    mystack.pop();
    mystack.pop();

    while(!mystack.empty())
    {
        cout<<" "<<mystack.top();
        //mystack.pop();
    }
}
