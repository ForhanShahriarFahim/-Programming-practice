#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int>m;
    map<string, int>::iterator it;
    m["dipto"] = 42;
    m["Fahim"] = 43;
    m.insert(make_pair("nabil",41));
    it = m.begin();

    for(it = m.begin();it !=m.end();++it)

    cout<<it->first<<" "<<it->second<<endl;
}
