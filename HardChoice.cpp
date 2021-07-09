#include<bits/stdc++.h>
using namespace std;
int main()
{
	int  Ca,Ba,Pa;
	int count=0;
	int Cr,Br,Pr;
	scanf("%d%d%d",&Ca,&Ba,&Pa);
	scanf("%d%d%d",&Cr,&Br,&Pr);
	if(Cr>Ca)
        count+=(Cr-Ca);
	if(Br>Ba)
	count+=(Br-Ba);
	if(Pr>Pa)
	count+=(Pr-Pa);
	printf("%d\n",count);
	return 0;
}
