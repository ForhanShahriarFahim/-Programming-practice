#include <stdio.h>

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	int a[n][m];
	for (int i=0;i<n;i++) {
		for (int j=0;j<m;j++)
            scanf("%1d",&a[i][j]);
	}
	int cnt=0;
	for (int i=0;i<n;i++) {
		for (int j=0;j<m;j++) {
			int max=a[i][j];
            int flag=1;
			for(int k=0;k<n;k++) {
            if(a[k][j]>max) flag=0;
			}
			if (flag) {
				cnt++;
				break;
			}
		}
	}
	printf("%d\n",cnt);
}
