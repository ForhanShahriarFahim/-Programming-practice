#include <stdio.h>
void if_else_grading();
int main()
{
    int score;

    printf("Enter score( 0-100 ): ");
    scanf("%d", &score);

    switch (score / 10)
    {

    case 10:
    case 9:
        printf("Grade: A");
        break;

    case 8:
        printf("Grade: B");
        break;

    case 7:
        printf("Grade: C");
        break;

    case 6:
        printf("Grade: D");
        break;

    case 5:
        printf("Grade: E");
        break;

    default:
        printf("Grade: F");
        break;
    }

    if_else_grading();
     return 0;
}

void if_else_grading()
{
    int marks;
    printf("\nEnter your marks ");
    scanf("%d", &marks);
    if (marks < 0 || marks > 100)
    {
        printf("Wrong Entry");
    }
    else if (marks < 50)
    {
        printf("Grade F");
    }
    else if (marks >= 50 && marks < 60)
    {
        printf("Grade D");
    }
    else if (marks >= 60 && marks < 70)
    {
        printf("Grade C");
    }
    else if (marks >= 70 && marks < 80)
    {
        printf("Grade B");
    }
    else if (marks >= 80 && marks < 90)
    {
        printf("Grade A");
    }
    else
    {
        printf("Grade A+");
    }
}