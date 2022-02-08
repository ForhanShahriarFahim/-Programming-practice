#include<iostream>
#include<cstdio>
#include<string.h>
#include<math.h>
using namespace std;
 
#define mx  (int)20
#define inf 100000000
 
float st[mx];
int top = -1;
char temp[50];
float item;
 
void push(float value)
{           
   if(top == mx-1)
   {
       printf("Your stack is empty...! :(\n");
       return;
   }
   st[++top] = value;
}
float pop()
{
   if(top == -1)
   {
       printf("Can't perform the operation. Because the stack has no element to pop..! :(\n");
       return inf;
   }
   return st[top--];
}
void showStack()
{
   printf("show stack called\n");
   for(int t = 0;t<=top;t++)
   {
       printf("%f,",st[t]);
   }
}
float do_operation(float op1, float op2, char ch)
{
   if(ch=='+') return op2+op1;
   else if(ch=='-') return op2-op1;
   else if(ch=='*') return op2*op1;
   else if(ch=='/') return op2/op1;
   else return pow(op2,op1);
 
}
 
int main()
{
 
   char arr[200];
   printf("Enter Your Postpix expression:");
   fgets(arr,30,stdin);
 
   int sz = strlen(arr)-1;
//    printf("size = %d\n",sz);
//    for(int i =0 ;i<sz;i++) printf("%c",arr[i]);
//    cout<<endl;

 
   int i = 0;
   cout<<"size = "<<sz<<endl;
 
   while (i!=sz)
   {
        // printf("i = %d\n",i);
       int j = 0;
       if(isdigit(arr[i]))
       {
        //    printf("isdigit called\n");
           while (arr[i]!=',' && arr[i]!='\0')
           {
               temp[j++] = arr[i++];
           }
           temp[j] = '\0';
           item = atof(temp);
           
            // printf("push %f\n",item);

           push(item);

        //    showStack();
           

       }
       else if(arr[i]==',')
       {
           i++;
        //    printf("COMMA called\n");
       }
       else{
        //    printf("else called\n");
        //    showStack();
        //    cout<<endl;
           float op1 = pop();
        //    showStack();
           float op2 = pop();
           item = do_operation(op1,op2,arr[i]);
           push(item);
          i++;
       }
       
   }
//    showStack();
   printf("%f",pop());
 

 
 
}
