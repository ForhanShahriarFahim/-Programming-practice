#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int input;
    cout<<"Input: ";
    cin>>input;
    int maximum = 0,div,minimum = LONG_MAX,rem;
    while(input!=0)
    {
        rem = input%10;
        input/=10;
        maximum = max(maximum,rem);
        minimum = min(minimum,rem);
    }
    cout<<"Difference: = "<<maximum<<"-"<<minimum<< " = "<<maximum-minimum<<endl;
}