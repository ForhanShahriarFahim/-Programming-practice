 #include<stdio.h>
 int main()
 {
     int a[10],i=0;
     inp:
         printf("Enter numbers: \n");
         scanf("%d",&a[i]);
         i++;
         if(i<10)
            goto inp;
         i=0;
         out:
             printf("The number is %d\n",a[i]+1);
             i++;
             if(i<10)
                goto out;
             return 0;
 }
