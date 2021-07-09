#include<bits/stdc++.h>
using namespace std;
class Rectangle
{
private:
    int length;
    int width;
public:
    Rectangle(){ length = width = 1;}
    Rectangle(int l, int b);
    int area();
    int perimeter();
    int getLength(){return length;}
    void setLength(int l){length = l;}
    ~Rectangle();
};
Rectangle::Rectangle(int l,int b)
{
     length = l;
     width = b;
}
int Rectangle::area()
{
    return length*width;
}
Rectangle::~Rectangle()
{

}
int main()
{
    Rectangle r(10,5);
    cout<<r.area();

}
