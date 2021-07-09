#include<stdio.h>
int main()
{
    int i=1,j=10;

    switch(i)
    {
    case 1 :
         printf("One\n");
         switch(j){
         case 10 :
             printf("Yes\n");
        break;
         }
        break;


      case 2 :
        printf("Two\n");
        break;
      case 3 :
        printf("Three\n");
        break;
      case 4 :
        printf("Four\n");
        break;
      case 5 :
        printf("Five\n");
        break;
    default:
        printf("The number is out of reach\n");

    }

}
