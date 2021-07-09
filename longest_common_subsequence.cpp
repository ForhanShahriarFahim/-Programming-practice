#include<bits/stdc++.h>
using namespace std;


int LCS(string &x,string &y, int m, int n)
{
    int sub[m+1][n+1];
    
    for(int i = 0; i<= m; i++)
    {
        for(int j = 0;j<=n ; j++)
        {
            if(i == 0 || j == 0) sub[i][j] = 0;
            else if(x[i-1] == y[j-1]) sub[i][j] = sub[i-1][j-1]+1;
            else 
                sub[i][j] = max(sub[i-1][j],sub[i][j-1]);
        }
    }
    return sub[m][n];
}



int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int m,n;
    m = s1.size();
    n = s2.size();
    cout<<"Longest commont subSeq is :"<<LCS(s1,s2,m,n);


}