#include<stdio.h>
#include<math.h>
int main(void)
{
	double i;
	for(i=1.0;i<=100.0;i++)
	{
		printf("Square root of %lf is %lf\n",i,sqrt(i));
		printf("Whole num int part is: %d\n",(int)sqrt(i));
		printf("Whole num floating part is: %lf\n",sqrt(i)-(int)sqrt(i));
		printf("\n");
		
	}return 0;
}
