#include<stdio.h>
#include<math.h>

int main(){
	int x1,x2,r1,r2,y1,y2;
	scanf("%d%d%d%d%d%d",&x1,&y1,&r1,&x2,&y2,&r2);
	int  R,x,y;
	int L;
	L=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);

	R=(r1+r2)*(r1+r2);
	int r =(r1-r2)*(r1 - r2);

	int p;
	if(L>R){
	p=0;
	printf("%d\n",p);
	}

	 else if (L== R)
        printf("1");
	else if(L<r || r1 == 0 || r2 == 0){

		p=0;
	printf("%d\n",p);
}
else if((L==0)&& (r1==r2)){
		p=-1;
	printf("%d\n",p);
}
else{
		p=2;
	printf("%d\n",p);
}
return 0;

}
