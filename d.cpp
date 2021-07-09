#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

long int arr[100002];

vector<long int>v;

string str,pat;

long int len1,len2;

void ans()

{

    v.clear();

    long i=0,j=0;

    int flag=0;
    while(i<len1)
    {
        if(str[i]==pat[j])
        {

            i++;
            j++;
              if(j==len2)
        {
                  flag=1;
                  j=0;
                  long int r =i-len2+1;

                  i=i-len2+1;
                  v.push_back(r);
        }
        }
        else
        {
            if(j!=0)
            {
                j=arr[j-1];
            }
            else
            {
                i++;
            }
        }
    }
    if(flag==1)
    {
        cout<<v.size()<<endl;
        for(long int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
    }
    if(flag==0)
    {
        cout<<"Not Found";
    }
    cout<<endl;
}
void s(){
    long int i,j,k;
    j=0;
    i=1;
    arr[0]=0;
while(i<len2)
{
    if(pat[i]==pat[j])
    {
        arr[i]=j+1;
        i++;
        j++;
    }
    else
    {
        if(j!=0)
        {
            j=arr[j-1];
        }
        else
        {
            arr[i]=0;
            i++;
        }
    }
}
}
int main()
{
    long int t,i,j,k,n,m;
    cin>>t;
    for(long int ii=0;ii<t;ii++)
    {
        cin>>str;
        cin>>pat;
        len1 = str.length();
        len2 = pat.length();
        for(i=0;i<len2;i++)
            arr[i]=0;
        s();
        ans();
        cout<<endl;
    }

    return 0;
}


