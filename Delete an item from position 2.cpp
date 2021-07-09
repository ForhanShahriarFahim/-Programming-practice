#include <stdio.h>
int main()
{
   int arr[100], position,n;
   printf("Enter number of elements : \n");
   scanf("%d",&n);

   printf("Enter %d elements\n", n);

   for (int i=0;i<n;i++)
      scanf("%d", &arr[i]);

   printf("Enter delete position\n");
   scanf("%d", &position);

      for(int i=position-1;i<n-1;i++)
            arr[i] = arr[i+1];

      printf("Final array:\n");

      for (int i=0;i<n-1;i++)
         printf("%d\n",arr[i]);
   return 0;
}
