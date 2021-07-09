#include<bits/stdc++.h>
using namespace std;
struct person{
int age;
float weight;
char name[30];
};
int main()
{
    int number;
    printf("Enter the number of person: ");
    scanf("%d",&number);
    struct person *p;
    p = (struct person *)malloc(number*sizeof(struct person));
    for(int i=0;i<number;i++)
    {
        scanf("%d %f %s", &(p+i)-> age, &(p+i)-> weight, (p+i)-> name);
    }
    printf("Displaying the result... ");
    for(int i=0;i<number;i++)
    {
        printf("%d %f %s\n", (p+i)-> age, (p+i)-> weight, (p+i)-> name);
    }
}
