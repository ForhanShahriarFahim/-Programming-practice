/*#include<stdio.h>
int main()
{
    int n,i,t;
    printf("Enter the num :");
    scanf("%d\n",&n);
    t=1;
    for(i=1;i<=n;i++){
            t=t*i;
    }
    printf("%d\n",t);
    return 0;

}*/
#include <stdio.h>

int main()
{
  int c, n, fact = 1;

  printf("Enter a number to calculate its factorial\n");
  scanf("%d", &n);

  for (c = 1; c <= n; c++)
    fact = fact * c;

  printf("Factorial of %d = %d\n", n, fact);

  return 0;
}
