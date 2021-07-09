 #include<stdio.h>
 #include<conio.h>
 int main()
 {
     char digits[10][10]=
     {
         "zero", "one", "two", "three",
         "four", "five", "six", "seven",
         "eight", "nine"
     };
     char num;
     printf("Enter number: ");
     num=getche();
     printf("\n");
     num=num-'0';
     if(num>=0 && num<10)
        printf("%s",digits[num]);
     return 0;
 }
