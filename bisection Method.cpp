#include<bits/stdc++.h>
using namespace std;
double bisection(int  n)
{

    int i;
    double lo,mid,flag=0,hi,mul;
    lo = 0;
    hi = n;
    int t =100;
    while(t--)
    {
        mid = (hi+lo)/2;
        double p =mid*mid*mid;
        if(abs(n-p)<.000001)
        {
            return mid;

        }
        else if((p-n)>0)
        {
            hi = mid;
            //lo+=1;
        }
        else if((p-n)<0)
        {
            lo = mid;
        }



    }
return 20;
}
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    double mid = bisection( n);
    printf("Square root of %d is : %lf\n",n,mid);
}

