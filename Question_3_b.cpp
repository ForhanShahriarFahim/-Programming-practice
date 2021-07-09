#include<bits/stdc++.h>
using namespace std;
int main()
{
    int input,n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    
    cout<<"Input Array: ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout<<"Output Array: ";
        if(n%2==0)
        {
            for (int i = 1; i < n; i+=2)
            {
                cout << ((arr[i] + arr[i - 1]) / 2) << " ";
            }
        }
        else 
        {
            for (int i = 1; i < n-1; i+=2)
            {
                
                cout << ((arr[i] + arr[i - 1]) / 2) << " ";

            }
            cout<<arr[n-1]/2<<endl;
        }
        
    
    
    
}