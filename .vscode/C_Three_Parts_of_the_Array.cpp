#include<bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 28;
long long a[maxn], r, l, ans;
int n;
void c_p_c()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int main(){
    c_p_c();
    cin >>n;
    for(int i = 0; i < n; i++)
		cin >> a[i];
	int i = 0, j = n - 1;
	while(i <= j){
		if(l > r)
        {
            cout<<"l : "<<l<<" "<<"j : "<<j<<endl;
            r += a[j--];
        }
			
		else
        {
            cout<<"l : "<<l<<endl;
            l += a[i++];
        }
			
		if(r == l)
			ans = r;	
	}
	cout << ans;
}