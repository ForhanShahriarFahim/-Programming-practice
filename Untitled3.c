/*Input the amount: 375
Expected Output:
There are:
3 Note(s) of 100.00
1 Note(s) of 50.00
1 Note(s) of 20.00
0 Note(s) of 10.00
1 Note(s) of 5.00
0 Note(s) of 2.00
0 Note(s) of 1.00 */
#include<stdio.h>
int main()
{
    int n,r,s;
    printf("Enter the total money :\n");
    scanf("%d",&n);
    r=n/100;
    printf("%d notes of 100\n",r);
    r=n%100;
    r=r/50;
    printf("%d notes of 50\n",r);
    r=n%100%50;
    r=r/20;
    printf("%d notes of 20\n",r);
    r=n%100%50%20;
    r=r/10;
    printf("%d notes of 10\n",r);
    r=n%100%50%20%10;
    r=r/5;
    printf("%d notes of 5\n",r);
    r=n%100%50%20%10%5;
    r=r/2;
    printf("%d notes of 2\n",r);
    r=n%100%50%20%10%5%2;
    printf("%d notes of 1\n",r);



    return 0;

}
