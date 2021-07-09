#include<stdio.h>
 
int main(){
	
	int a[10]={0},l=0,r=9,i,j,k,n;
	
	scanf("%d",&n);
	getchar();
	
	char c;
	
	for(i=0;i<=n;i++){
		
		scanf("%c",&c);
		
		if(c=='L'){
			
			while(a[l]!=0){
			
				l++;
			}
			
			a[l]=1;
			
			l=0;
		
		}
		else if(c=='P'){
			
			while(a[r]!=0)
				r--;
				
			a[r]=1;			
			r=10;
			
		}		
		else
			a[c-48]=0;	
			
		
	}
	for(j=0;j<10;j++)
		printf("%d",a[j]);
	
	return 0;
}
