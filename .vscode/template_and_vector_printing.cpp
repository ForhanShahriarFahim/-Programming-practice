
#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//#include <ext/pb_ds/detail/standard_policies.hpp>
//#include <ostream>

//using namespace __gnu_pbds;
using namespace std;
char gap = 32;

template<typename T>
ostream& operator<<(ostream &os, const vector<T> &v) {
    os << '{';
    for (const auto &x : v) os << gap << x;
    return os << '}';
}

template<typename A, typename B>
ostream& operator<<(ostream &os, const pair<A, B> &p) {
    return os << '(' << p.first << gap << p.second << ')';
}

template <class T>
void read(T &x) {
    char c;
    for (c = getchar(); c < '0' || c > '9'; c = getchar())
        ;
    for (x = 0; c <= '9' && c >= '0'; c = getchar()) x = x * 10 + (c & 15);
}
#define ll long long
#define lll __int128_t
#define pb push_back
#define mp make_pair
#define All(x) (x).begin(),(x).end()
typedef pair < int,int> ii;
typedef vector<ii> vii;
typedef vector<ll>vl;
typedef vector<int> vi;
typedef vector<vi> vvi;
/* typedef tree<
        int,
        null_type,
        less<int>,
        rb_tree_tag,
        tree_order_statistics_node_update>
        ordered_set;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 */ll hashPrime = 1610612741;
  struct corona{
    int a,b,c;
    corona(){
        a=b=c=0;
    }
    corona(int x){
        a=b=c=x;
    }
    corona(int x,int y){
        a=b=x;
        c = x*y;
    }
    friend ostream &operator<<(ostream &os, const corona &corona) {
        os << "(a: " << corona.a << " b: " << corona.b << " c: " << corona.c<<")";
        return os;
    }

    bool operator<(const corona &rhs) const {
        if (a < rhs.a)
            return true;
        if (rhs.a > a)
            return false;
        if (b < rhs.b)
            return true;
        if (rhs.b < b)
            return false;
        return c < rhs.c;
    }

    bool operator>(const corona &rhs) const {
        return rhs < *this;
    }

    bool operator<=(const corona &rhs) const {
        return !(rhs < *this);
    }

    bool operator>=(const corona &rhs) const {
        return !(*this < rhs);
    }
}; 
 
template<class T>
T fun(T x, T y){
    if(x)
        return x/y + x;
    else return 0;
}
 template <class T>
T sum(T a, T b){
    return a+b;
} 
 /*  int sum(int a, int b){
    return a+b;
 }
 double sum1 (double a, double b){
    return a+b;
 } */ 

template<typename K, typename V>//K==int V= double
K f(V a , V b){
    return (K)(a+b);
}
void c_p_c()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int main(){
    c_p_c();
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    //cout<<fun<double>(1,3)<<endl;
    //cout<< fun<double>(1,3)<<endl;
    //cout<<sum<double>(25.5,5)<<endl;

    //cout<< sum<int> (45.097,345)<<endl;
    //cout<< f<int,double>(123.0,4.3245)<<endl;
    vector<int> V;
    /* set <int,greater<int>> S;
    for(int i=0;i<12;i++){
        S.insert(i);
    }
    for(int i : S){
        cout<<i<<endl;
    } */
    //map<string,int>m;
   // m["Adrita"] = 53;

    vector<corona> c;
    c.emplace_back();
    c.emplace_back(5);
    c.emplace_back(5,6);
    //sort(All(c));
    cout<<c<<endl; 
    return 0;
}