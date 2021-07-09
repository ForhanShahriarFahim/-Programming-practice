#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],hi,lo,mid,flag = 0,find,i;
    printf("Enter the number in assending order\n");
    for(i=0;i<n;i++)
        cin>>arr[i];

    cout<<"Enter the element to find"<<endl;
    cin>>find;
    lo = 0;
    hi = n-1;
    while(hi>=lo)
    {
        mid = (hi+lo)/2;
        if(find == arr[mid])
        {
              flag = 1;
              break;
        }
        else
        {
            if(find>arr[mid])
                lo = mid+1;
            else
                hi = mid-1;
        }

    }
    if(flag==1)
        printf("The position of the number is %d\n",mid+1);
    else
        cout<<"Element not found"<<endl;


}
