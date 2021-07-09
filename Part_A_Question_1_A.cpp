//swapping numbers
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    cout<<"Input = ";
    cin>>input;
    int siz = input.size();
    for(int i=siz-1;i>=0;i--)
    {
        if((input[i]-'0')%2!=0)
        {
            continue;
        } 
        else 
        {
            if(i%2!=0&&siz%2==0)
            {
                swap(input[i],input[i-1]);
                i--;
                
            }
            else if(i%2==0 && siz%2!=0)
            {
                swap(input[i], input[i - 1]);
                i--;
            } 
            else if(i%2!=0 && siz%2!=0)
            {
                swap(input[i],input[i+1]);
            }
            else if(i%2==0 && siz%2==0)
            {
                swap(input[i],input[i+1]);
            }
        }

    }
    cout<<"Output = "<<input<<endl;
}