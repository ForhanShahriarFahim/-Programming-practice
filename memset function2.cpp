#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}
int main()
{
    int n=10;
    //cin>>n;
    int arr[n];
    //Fill whole array with 0
    memset(arr,10,n*10*sizeof(arr[0]));
    printf("Array after memset()\n");
    printArray(arr,n);
   // printf("%d\n",sizeof(arr[0]));
    return 0;
}
//prt  = = Starting address memory to be fill
// x == value to be fill
// n == Number of bytes to be filled starting from ptr to be filled
//void *memset(void *ptr, int x, size_t n);
