#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,Ax,Ay,Bx,By,Cx,Cy,Dx,Dy,t;
    int area;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d%d%d%d",&Ax,&Ay,&Bx,&By,&Cx,&Cy);
        Dx = Cx-(Bx-Ax);
        Dy = Ay+(Cy-By);
        area=.5*(((Ax*By)+(Bx*Cy)+(Cx*Dy)+(Dx*Ay))-((Ay*Bx)+(By*Cx)+(Cy*Dx)+(Dy*Ax)));
        printf("Case %d: %d %d %d\n",i,Dx,Dy,abs(area));
    }

}
