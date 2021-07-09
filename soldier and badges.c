#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, j, count=0, tmp;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++){
		scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(a[i]>a[j]){
				tmp=a[j];
				a[j]=a[i];
				a[i]=tmp;
			}
		}
    }


	for(i=0; i<n; i++) {
		for(j=i+1; j<n; j++) {
			if(a[i]==a[j]) {
				count++;
				a[j]+=1;
			}
		}
	}
    printf("%d",count);
    return 0;
}
