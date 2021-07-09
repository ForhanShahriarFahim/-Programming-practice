#include<stdio.h>

//global stracture
struct Person
    {
      int age;
      float salary;
    };

int main()
{
    //local stracture

    struct Person person1 = {27,25550.25};
    struct Person person2,person3;
    //scanf("%d",&person1.age);
    //scanf("%f",&person1.salary);
   // printf("Age = %d\n",person1.age);
   // printf("Salary = %f\n",person1.salary);
    //printf("\n\n");
    person2.age = 25;
    person2.salary = 27750.50;

    person3 = person2;
   // scanf("")
   printf("Person1 : \n");
   printf("Age = %d\n",person1.age);
   printf("Salary = %.2f\n",person1.salary);


    printf("\nPerson2 : \n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2f\n",person2.salary);

   // person2.age = 25;
    //person2.salary = 1550.25;
   // printf("Age = %d\n",person2.age);
   //printf("Salary = %lf\n",person2.salary);
    printf("\nPerson3 : \n");
    printf("Age = %d\n",person3.age);
    printf("Salary = %.2f\n",person3.salary);
}
