#include<bits/stdc++.h>
using namespace std;
int N,M;
int adj[10][10];


void add_edge(int u,int v)
{
    adj[u][v] = 1;
    adj[v][u] = 1;
}

void displayMatrix()
{
    for(int i = 1;i<N+1;i++)
    {
        for(int j = 1;j<N+1;j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    memset(adj,0,sizeof(adj));
    cout<<"Enter the number of nodes: ";
    cin>>N;
    cout<<"Enter the number of edge: "<<endl;
    cin>>M;
    int u,v;
    cout<<"enter the matrix: "<<endl;
    for(int i = 0;i<M;i++)
    {
        cin>>u>>v;
        add_edge(u,v);
    }
    displayMatrix();
}