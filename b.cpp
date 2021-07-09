#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    int n,k;    cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++)    cin >> a[i];
    sort(a , a+n);
    cout << a[0] <<"\n";
    k=k-1;
    for(int i=1;i<n;i++){
        if(a[i] - a[i-1] > 0 && k > 0){
            cout << a[i] - a[i-1] <<"\n";
            k--;
        }
    }
    while(k--){
        cout << 0 << "\n";
    }
    return 0;
}
