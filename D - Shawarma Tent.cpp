#include<bits/stdc++.h>
using namespace std;
int main()
{
    int students,sx,sy;
    cin>>students>>sx>>sy;
    int l=0,r=0,u=0,d=0;
    int x,y;
    for(int i=0;i<students;i++)
    {
        cin>>x>>y;
    }
    if(x>sx)
        r++;
    else if(x<sx)
        l++;
    if(y>sy)
    {
        u++;
    }
    else if(y<sy)
    {
        d++;
    }
    int sha_x,sha_y,sha_eater;
    sha_x = max(r,l);
    sha_y = max(u,d);
    sha_eater = max(sha_x,sha_y);
    cout<<sha_eater<<endl;
    if(sha_eater==u)
        cout<<sx<<" "<<sy+1<<endl;
    else if(sha_eater==d)
        cout<<sx<<" "<<sy-1<<endl;
    else if(sha_eater==r)
        cout<<sx+1<<" "<<sy<<endl;
    else if(sha_eater==l) cout<<sx-1<<" "<<sy<<endl;
}
