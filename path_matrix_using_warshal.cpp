#include <bits/stdc++.h>
using namespace std;
int adj[100][100];
int P[100][100];
void Create_adj(int x)
{
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            adj[i][j] = 0;
        }
    }
    cout << "enter the number of edges" << endl;
    int m;
    cin >> m;
    cout << "Enter the edges" << endl;
    int y, z;
    while (m--)
    {

        cin >> y >> z;
        adj[y][z] += 1;
    }
}
void Create_path_matrix(int x)
{
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            if (adj[i][j] != 0)
                P[i][j] = 1;
            else
                P[i][j] = 0;
        }
    }
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            for (int k = 1; k <= x; k++)
            {
                if (P[j][i] == 1 && P[i][k] == 1)
                    P[j][k] = 1;
            }
        }
    }
}
void show_path_matrix(int x)
{
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            cout << path[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "enter the number of node" << endl;
    cin >> n;
    Create_adj(n);
    Create_path_matrix(n);
    show_path_matrix(n);
}
