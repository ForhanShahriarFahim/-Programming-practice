#include<stdio.h>
int main()
{
	float f;
	for(f=1.0;(int) f<=9;f=f+0.1)
	printf("%.1f ",f);
	return 0;
}
