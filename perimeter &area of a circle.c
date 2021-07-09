#include<stdio.h>
#define pi 3.1416;
int main()
{
  float r,perimeter,area;
  printf("Enter the radious :");
  scanf("%f",&r);
  perimeter=2*pi*r;
  area=pi*r*r;
  printf("perimeter is %f and area is %f",perimeter,area);
}
