/*বিসমিল্লাহির_রহমানির_রহীম
    Author: Obaydullah
    CF Contest:1327
*/
#include<bits/stdc++.h>
For Ordered Set
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
For Ordered Set
#define     pie                          acos(-1.0)
#define     N                            2000015
#define     eps                          1e-9
#define     ff                           first
#define     ss                           second
#define     nl                           '\n'
#define     mod                          1000000007
#define     sp                           ' '
#define     CLR(a)                       memset(a,0,sizeof(a))
#define     SET(a)                       memset(a,-1,sizeof(a))
#define     all(x)                       x.begin(),x.end()
#define     allr(x)                      x.rbegin(),x.rend()
#define     sz(x)                        (int)(x).size()
#define     Fast_Read                    ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define     Precision(x)                 cout.setf(ios::fixed); cout.precision(x);
#define     bug                          cout<<"debug"<<nl;
#define     YES                          printf("YES\n");
#define     NO                           printf("NO\n");
using namespace std;
For Ordered Set

using namespace __gnu_pbds;

template<typename T>
using ordered_set=tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

template<typename T>
using ordered_multiset=tree<T, null_type, less_equal<T>, rb_tree_tag,tree_order_statistics_node_update>;

/// For Ordered Set
int dx[]={0,0,1,-1,-1,-1,1,1};
int dy[]={1,-1,0,0,-1,1,1,-1};
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
template < class T> inline T biton(T n,T pos){return n |((T)1<<pos);}
template < class T> inline T bitoff(T n,T pos){return n & ~((T)1<<pos);}
template < class T> inline T ison(T n,T pos){return (bool)(n & ((T)1<<pos));}
template < class T> inline T gcd(T a, T b){while(b){a%=b;swap(a,b);}return a;}
inline int nxt(){int aaa;scanf("%d",&aaa);return aaa;}
inline ll lxt(){ll aaa;scanf("%lld",&aaa);return aaa;}
inline double dxt(){double aaa;scanf("%lf",&aaa);return aaa;}
template <class T> inline T bigmod(T p,T e,T m){T ret = 1;
for(; e > 0; e >>= 1){
    if(e & 1) ret = (ret * p) % m;p = (p * p) % m;
} return (T)ret;}
/// Vector Input ///
template<class T>
void takeInput(vector<T>& aaa, int n){
    int typeSize=sizeof(T);
    for(int i=0;i<n;i++){
        if(typeSize==sizeof(int)) aaa.push_back(nxt());
        else aaa.push_back(lxt());
    }
}
/// Vector Output ///
template<class T>
void giveOutput(const vector<T>& aaa, int start=0, int n=0){
    if(n==0) n=aaa.size();
    assert(n<=aaa.size());
    int typeSize=sizeof(T);
    for(int i=start;i<n;i++){
        if(i>start){
            if(typeSize==sizeof(int)) printf(" %d",aaa[i]);
            else printf(" %lld",aaa[i]);
        }else{
            if(typeSize==sizeof(int)) printf("%d",aaa[i]);
            else printf("%lld",aaa[i]);
        }
    }
    printf("\n");
}
#ifdef obaydullah
     #define debug(...) __f(#__VA_ARGS__, __VA_ARGS__)
    template < typename Arg1 >
    void __f(const char* name, Arg1&& arg1){
        cerr << name << " is " << arg1 << std::endl;
    }
    template < typename Arg1, typename... Args>
    void __f(const char* names, Arg1&& arg1, Args&&... args){
        const char* comma = strchr(names+1, ',');
        cerr.write(names, comma - names) << " is " << arg1 <<" | ";
        __f(comma+1, args...);
    }
#else
    #define debug(...)
#endif
///******************************************START******************************************
void solve(){
    ll n=nxt(),k=nxt();
    if(n%2LL==k%2LL){
        ll sq=k*k;
        if(n%2==1 && k==1){
            cout<<"YES"<<endl;
            return;
        }
        if(sq>n){
            cout<<"NO"<<endl;
            return;
        }
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
int main()
{

    Fast_Read
    Precision(10)
#ifdef obaydullah
    double start_time = clock();
    ///freopen ("output.txt","w",stdout);
    ///freopen ("input.txt","r",stdin);
#endif
    int tc=1;
    tc=nxt();
    while(tc--)
    {
        solve();
    }
#ifdef obaydullah
    double end_time = clock();
    cerr<<"Time = "<<fixed<<setprecision(10)<<(end_time - start_time) / CLOCKS_PER_SEC<<'\n';
#endif

    return 0;
}
