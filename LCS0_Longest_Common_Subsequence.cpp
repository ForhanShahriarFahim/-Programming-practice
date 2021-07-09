//Problem link - https : www.spoj.com/problems/LCS0/fbclid=IwAR3wT7v7itOjTuVIZ_tDNPR-1pE7JtSE8VNMUj3HacHqYykLr1qdkGKqAUE
//Name: Forhan Shahriar Fahim
// Using recursion 
#include <bits/stdc++.h>
using namespace std;
string s1,s2;
int n, m;
int dp[5001][5001];
int lcs(int x,int y)
{
    
    if(x>=n || y>=m) return 0;
    if(dp[x][y] !=-1) return dp[x][y];
    int ans = 0;
    if(s1[x] == s2[y]) ans = 1+lcs(x+1,y+1);
    else ans = max(lcs(x+1,y),lcs(x,y+1));
    return dp[x][y] = ans;

    
}

void solve()
{
   
    cin>>s1>>s2;
    n = s1.size();
    m = s2.size();
    memset(dp, -1, sizeof(dp));
    cout<<lcs(0,0)<<endl;
}



int main(int argc, char const *argv[])
{
   // c_p_c();
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    //cin>>t;
    for (int i = 0; i < t; i++)
        solve();
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}
