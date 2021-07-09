#include<bits/stdc++.h>
using namespace std;
void c_p_c()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
vector<int>graph[5];
 void printGraph(vector<int>graph[],int n)
 {
     cout<<"The graph is: "<<endl;
     for(int i=0;i<n;i++)
     {
         cout<<i<<" -> ";
         for(int j=0;j<graph[i].size();j++)
         {
             cout<<graph[i][j]<<" ";
         }
         cout<<endl;
     }     
 }

int main()
{
    c_p_c();
    int nodes,edges;
    cin>>nodes>>edges;
    int u,v;
    for(int i=0;i<edges;i++)
    {
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    printGraph(graph, 5);
    return 0;
}