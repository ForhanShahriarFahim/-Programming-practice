#include<bits/stdc++.h>
using namespace std;
int stack1[100],n=100,top = -1;
void push(int val)
{
    if(top>=n-1)
        cout<<"stack1 Overflow"<<endl;
    else
    {
        top++;
        stack1[top]=val;
    }
}

void pop()
{
    if(top<=-1)
        cout<<"stack1 Underflow"<<endl;
    else
    {
        cout<<"The popped element is "<<stack1[top]<<endl;
        top--;
    }
}
void  display()
{
    if(top>=0)
    {
        cout<<"stack1 elements are:";
        for(int i=top;i>=0;i--)
            cout<<stack1[i]<<" ";
        cout<<endl;
    }
    else
        cout<<"stack1 is empty";
}

int main()
{
    int ch,val;
    cout<<"1) Push in the stack1"<<endl;
    cout<<"2) Pop from the stack1"<<endl;
    cout<<"3) Display stack1"<<endl;
    cout<<"4) Exit"<<endl;
    do{
        cout<<"Enter choice: "<<endl;
        cin>>ch;
        switch(ch){
            case 1: {
                cout<<"Enter the value to be pushed:"<<endl;
                cin>>val;
                push(val);
                break;
            }
            case 2: {
                pop();
                break;
            }
            case 3: {
                display();
                break;
            }
            case 4: {
                cout<<"Exit"<<endl;
                break;
            }
            default: {
                cout<<"Invalid Choice"<<endl;
            }
        }
    }while(ch!=4);
    return 0;
}
