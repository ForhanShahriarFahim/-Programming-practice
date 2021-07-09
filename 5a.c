#include<stdio.h>
double getAverage();
int main()
{
    int balance[5]={1000,2,3,17,50};
    double avg;
    avg=getAverage(balance,5);
    printf("Average value is:%f",avg);
    return 0;
}
double getAverage()
{
    float balance=0;

    double avg;
    for(int i=0;i<5;i++)
    {
        balance=balance+balance[i];
    }



}
