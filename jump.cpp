#include <bits/stdc++.h>
using namespace std;


#define ll  long long


int main(){
  int n;
  cin >> n;
  string s;
  cin >> s;
  ll ans = 0;
  ll cnt1 = 0, cnt2 = 0, cnt3 = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='R') cnt1++;
        if(s[i]=='G') cnt2++;
        if(s[i]=='B') cnt3++;
    }

ans = cnt1 * cnt2 * cnt3;

for(int i = 1; i <= n; i++){
  for(int j = 0; j< n; j++){
    if(j - i < 0 || j + i >= n) continue;
    if(s[j] != s[j - i] && s[j] != s[j + i] && s[j + i] != s[j - i])
    {
        cout<<"s[j] : "<<j<<"s[j-i] : "<<j-i<<"s[j+i] : "<<j+i<<endl;
        ans--;
    }
  }
}
  cout << ans << "\n";
  return 0;
}
