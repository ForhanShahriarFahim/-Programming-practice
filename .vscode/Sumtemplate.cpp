#include <iostream>
using namespace std;
template<class T>
class cSum
{
    T value;
    public : 
    cSum(T first, T second)
    {
        value = first+second;
    }
    T Result() { 
        return value;
    }
};
int main()
{
    cSum<int> sum(1,4);
    cout<<sum.Result()<<endl;
    cSum<double>sum2(1.2,3.4);
    cout<<sum2.Result()<<endl;
}