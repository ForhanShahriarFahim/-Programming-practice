#include <stdio.h>
#include<string.h>
int main() 
{ 
    int n, count=0;
    scanf("%d",&n);
    char str[50];
    
    scanf("%s",str);
    
    int len=strlen(str);
    
 
    for(int i=0;i<len;i++)
    {
        
            if(str[i]==str[i+1])
            {
            	count++;
			}
		}
		
		printf("%d",count);
}
    
        
