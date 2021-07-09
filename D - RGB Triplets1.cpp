#include <iostream>

using namespace std;
typedef long long ll;
const int nmax=10000;
char S[nmax];

int N;

int main() {
    ll ans=0;
    ll nr=0, ng=0, nb=0;
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N;
    cin >> S;
    // cout << S << endl;
    if (N<=3){
        cout << 0 << endl;
        return 0;
    }
    for(int i=1; i<= N; i++){
        if (S[i-1] == 'R') {
            nr ++;
        } else if(S[i-1] == 'G'){
            ng ++;
        } else {
            nb ++;
        }
    }
    //cout << nr << " " << ng << " " << nb << endl;
    ans = nr * nb * ng;
    for(int i = 1; i<=N-2;i++){
        for(int j=i+2; j<=N; j+=2){
            int k;
            cout<<"j " <<j<<endl;
            k = (i+j)/2;
            if (S[i-1] != S[j-1] && S[i-1] != S[k-1] && S[j-1] != S[k-1]){
                ans --;
            }
        }
    }

    cout << ans << endl;

}
