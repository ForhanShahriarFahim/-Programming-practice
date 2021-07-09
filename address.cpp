#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10;
    int &r = a;
    int *p = &r;
    printf("%d",*p);
}
