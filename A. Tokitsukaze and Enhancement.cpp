#include<bits/stdc++.h>
using namespace std;
int main()
{


    int number,cnt=0;
    cin>>number;
    if(number%4==1)
        printf("0 A\n");
    if(number%4==0)
        printf("1 A\n");
    if(number%4==2)
        printf("1 B\n");
    if(number%4==3)
        printf("2 A\n");

}
