#include <stdio.h>
int main()
{
    int i, n, small, elem;
    
    printf("Enter first number: ");
    scanf("%d", &n);    
    sm = n;
    for (i = 1; i <= 5; i++)
    {
        printf("\nEnter another number: ");
        scanf("%d", &n);        
        if (n < small)
            small = n;
    }
    
    printf("\n The smallest number is %d", sm);
    return 0;
}