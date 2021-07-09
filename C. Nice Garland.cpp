#include <iostream>
using namespace std;

int n;
string s;
string p[6] = {"RGB", "RBG", "BRG", "BGR", "GBR", "GRB"};

int main()
{
	cin >> n >> s;
	int ans = 1e9+7, idx = 0;
	for (int i=0; i<6; ++i) {
		int cnt = 0;
		cout<<p[i]<<endl;
		for (int j=0; j<n; ++j)
			if (s[j] != p[i][j%3])
            {
                cnt++;
                cout<<"s[j] : "<<s[j]<<" p[i][j%3] : "<<p[i][j%3]<<endl;
            }


		if (cnt < ans) {
			ans = cnt;
			idx = i;
			cout<<"cnt : "<<cnt<<" idx : "<<idx<<endl;
		}
	}

	cout << ans << '\n';
	for (int i=0; i<n; ++i)
		cout << p[idx][i%3];

	return 0;
}
