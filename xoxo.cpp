#include<bits/stdc++.h>
using namespace std;
set<string>st;
int main()
{
	int n,m;
	string s,t,mid="",ans="",rev="";
	cin>>n>>m;
	while(n--)
    {
		cin>>s,t=s;
		reverse(t.begin(),t.end());
		if(s==t)
		{
		   mid=t;
		   cout<<"middle :"<<mid<<endl;
		}

		else if(st.count(t))
        {
            ans+=t;
            cout<<"ANS : "<<ans<<endl;
            cout<<"t : "<<t<<endl;
            cout<<"pre rev "<<rev<<endl;
            cout<<"pre s "<<s<<endl;

            rev=s+rev;
            cout<<"rev : "<<rev<<endl;
            cout<<"s : "<<s<<endl;
        }
		st.insert(s);

		cout<<"inserted :" <<s<<endl;
	}
	ans=ans+mid+rev;
	cout<<ans.size()<<"\n"<<ans<<"\n";
}
