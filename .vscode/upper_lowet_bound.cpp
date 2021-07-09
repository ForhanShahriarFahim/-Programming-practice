#include<iostream>
#include<vector>
#include<iterator>

using namesapce std;
int main()
{
    vector<int>v = {1,3,5,8,9,12};
    vector<int>::iterator it;
    it = std::lower_bound(v.begin(),v.end(),6);
    std :: cout<<*it;
}