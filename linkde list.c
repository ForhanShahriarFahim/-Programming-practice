#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node *next;
};
typedef struct node *nodeptr;
nodeptr getnode(void);
nodeptr insertnode(nodeptr ptr, int value);
main()
{
    int i,n,value;
    nodeptr start,ptr;
    ptr=start;
    printf("enter a negative number to terminate: ");
    do{
        scanf("%d",&value);
        if(value>=0)
            ptr=insertnode(ptr,value);
    }while(value>=0);
    ptr->next=0;
    ptr=start->next;

    while(ptr!=0)
    {
        printf("%d",ptr->data);
        ptr=ptr->next;
    }
}
    nodeptr getnode(void){
        nodeptr p;
        p=(nodeptr) malloc(sizeof(struct node));
        return(p);
    }
    nodeptr insertnode(nodeptr ptr, int value){
        nodeptr q;
        q=getnode();
        q->data=value;
        ptr->next=q;
        return(q);
    }

