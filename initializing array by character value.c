 #include<stdio.h>
 int main()
 {
     int serveruser[5][2]={
     1, 14,
     2, 28,
     3, 19,
     4, 8,
     5, 15
       };
       int server ;
       int i;
       printf("Enter the server name :");
       scanf("%d",&server );
       for(i=0;i<5;i++)
        if(server==serveruser[i][0])
       {
           printf("There are %d users on server %d.\n",serveruser[i][1],server);
           break;
       }
       //report error if not found
       if(i==5)
        printf("Server not listed.\n");
       return 0;
 }
