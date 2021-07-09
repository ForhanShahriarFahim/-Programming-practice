#include<stdio.h>
int main(){

int list[50];
int i = 0;
int input;
while (i < 50){
scanf("%d",&input);
  if(input == '\n') break;
  list[i] = input;
  i++;
}
int a;
for (a=0;a<i;a++)
printf("%d ",list[a]);}

