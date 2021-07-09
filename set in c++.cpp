#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    set <int,greater<int> >s;
    s.insert(40);
    s.insert(30);
    s.insert(60);
    s.insert(20);
    s.insert(50);
    s.insert(50);
    s.insert(10);

    set<int,greater<int> >::iterator itr;
    cout<<"\nThe set s is : ";
    for(itr = s.begin();itr!=s.end();itr++)
    {
        cout<< "\t"<<*itr;
    }
    cout<<endl;

    set<int> s2(s.begin(),s.end());
    cout<<"\nThe set s2 after assign from s is : ";
    for(itr = s2.begin();itr!=s2.end();itr++)
    {
        cout<<"\t"<<*itr;
    }
    cout<<endl;

    cout<<"\n s2 after removal of elements less than 30 : ";
    s2.erase(s2.begin(),s2.find(30));
    for(itr = s2.begin();itr!=s2.end();itr++)
    {
        cout<< "\t" << *itr;
    }
    int num;
    num = s2.erase(50);
    cout<<"\ns2.erase(50) : ";
    cout<<num << " removed\t";
    for(itr = s2.begin();itr!=s2.end();itr++)
    {
        cout<<"\t"<<*itr;
    }
    cout<<endl;

    cout<<"s.lower_bound(40) :  "
        << *s.lower_bound(40)<<endl;
    cout<<"s.upper_bound(40) : "
        <<*s.upper_bound(20 )<<endl;

    //lower bound and upper bound for set s2
    cout<<"s2.lower_bound(40) : "
        <<*s2.lower_bound(30)<<endl;
    cout<<"s2.upper_bound(40) : "
        <<*s2.upper_bound(40) <<endl;
    return 0;
}
