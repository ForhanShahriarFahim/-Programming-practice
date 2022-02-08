#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int add(int a,int b)
{
    return a+b;
}

void bfs(int s)
{
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        int p = q.front();
        q.pop();
        cout<<p<<" ";
        for(auto c:g[p])
        {
            if(!vis[c])
            {
                q.push(c);
                vis[c] = true;
            }
        }
    }
}

int main()
{
    //write a program for printing prime number in a given range
    int n;
    cin>>n;
    vector<int>v;
    for(int i=2;i<=n;i++)
    {
        v.pb(i);
    }
    for(int i=2;i<=sqrt(n);i++)
    {
        if(v[i]!=0)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                v[j] = 0;
            }
        }
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i]!=0)
        {
            cout<<v[i]<<" ";
        }
    }
    //write a function to add two numbers
    int store = add(10,20);
    cout<<store;

    bfs();

    return 0;
}
