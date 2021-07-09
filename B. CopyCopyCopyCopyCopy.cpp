#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    int n;
    cin>>test;
    set<int>st;
    while(test--)
    {
        st.clear();
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            st.insert(arr[i]);
        }
        cout<<st.size()<<endl;
    }

}
