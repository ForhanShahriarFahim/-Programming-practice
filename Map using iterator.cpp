#include<iostream>
#include<map>
#include<string>
#include<iterator>
using namespace std;
int main()
{
    map<string ,int > names;
    map<string ,int >::iterator it;

    names["peter"] = 19;
    names["Fahim"] = 20;
    for(it = names.begin();it != names.end();it++)
    {
        cout<<  it->second<<endl;
    }
}
