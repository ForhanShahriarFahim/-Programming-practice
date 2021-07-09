#include <bits/stdc++.h>
#include <map>
using namespace std;
int main()
{
    map<int, int> m;
   /*  m.emplace('x',100);
    m.emplace('y',200);
    m.emplace('z',300);
    */ 
    //map<char,int>:: iterator it;
    /* for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    } */
    //m.clear();
    /* m['a'] = 1101;
    m['b'] = 2022; */
    m.insert({0,42});

    for (auto &x:m)
    {
        cout << x.first << " " << x.second << endl;
    }
    
}