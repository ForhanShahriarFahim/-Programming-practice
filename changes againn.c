#include<stdio.h>
int main(void)
{
	int answer,count,chances,right;
	for(count=1;count<11;count++){
		printf("What is %d+%d\n",count,count);
		scanf("%d",&answer);

	if(answer==count+count){
		printf("Right!\n");
	}else{
		printf("Sorry you are Wrong\n");
		printf("Please Try Again:\n");
		right=0;
		for(chances=0;chances<3&&!right;chances++){
		
		printf("What is %d+%d?\n",count,count);
		scanf("%d",&answer);
		if(answer==count+count){
			printf("Right\n");
			right=1;
		}
	}
		if(!right)
		printf("Still Wrong. The answer is %d\n",count+count);
		
		}
		
	}
	
  
  return 0;

}

