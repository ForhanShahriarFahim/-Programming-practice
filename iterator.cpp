#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v = (1,3,5,8,9,12);
    vector<int>::it = lower_bound(v.begin(),v.end(),6);
    cout<<*it;
}

