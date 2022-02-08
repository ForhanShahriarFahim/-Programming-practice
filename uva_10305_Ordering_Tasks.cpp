#include<bits/stdc++.h>
using namespace std;
#define pb push_back

vector<bool>vis;
vector<int>graph[101];
int n,m,u,v;
stack<int>s;
void topologica_sort(int x)
{
    vis[x] = true;
    for(auto k:graph[x])
    {
        if(!vis[k])
        {            
            topologica_sort(k);
        }
    }
    s.push(x);
}

int main()
{
    
    while (cin >> n >> m, n != 0 || m != 0)
    {
        vis.assign(n + 1, false);
        // graph.clear();
        // graph.resize(n+1);
        
        for (int i = 0; i < n; i++)
        {
            graph[i].clear();
        }

        while (m--)
        {
            cin>>u>>v;
            graph[u].pb(v);
        }

        for (int i = 1; i <= n; i++)
        {
            if (!vis[i])
                topologica_sort(i);
        }
        while (!s.empty())
        {
            cout << s.top() << " ";
            s.pop();
        }
        cout << endl;
    }
    return 0;
}