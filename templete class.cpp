#include<bits/stdc++.h>
using namespace std;
template <typename T>
class Arithmatic
{
private:
    T a;
    T b;
public:
    Arithmatic(T a, T b)
    {
        this->a = a;
        this->b = b;
    };
    T add();
    T sub();
};

template <typename T>
T Arithmatic<T>::add()
{
    T c;
    c = a+b;
    return c;
}
template <typename T>
T Arithmatic<T>::sub()
{
    T c;
    c = a-b;
    return c;
}
int main()
{
    Arithmatic<int> a1(10,5);
    cout<<a1.add();
}
