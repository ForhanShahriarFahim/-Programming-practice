#include <stdio.h>
#include<string.h>
int main() 
{ 
    int count=0,i,j;
    
    char str[100];
    scanf("%s",str);
    int len=strlen(str);
    int a[len];     
    for(i=0;i<len;i++)
    { 
	if(a[i]=="true")
    {
	count++;
        for( j=i+1;j<len;j++)
        {
        	if(str[i]==str[j])
        	{
        		a[j]=0;
			}
		}
	}
	
}
 if(count%2==0)
 printf("CHAT WITH HER!");
 else
 printf("IGNORE HIM!");
 
}
   
