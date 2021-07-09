#include<stdio.h>
int main()
{
    int serverusers[5][12]={
    1, 14,
    2, 28,
    3, 19,
    4, 8,
    5, 15

    };
    int server;
    int i;
    printf("Enter the server number: ");
    scanf("%d", &server);
    //look it up on the table
    for(i=0;i<5;i++)
        if(server==serverusers[i][0])
        {
            printf("There are %d users on server %d.\n",serverusers[i][1],server );
            break;

        }
        //report error if not found
        if(i==5)
            printf("srerver is not listed.\n");
        return 0;

}
