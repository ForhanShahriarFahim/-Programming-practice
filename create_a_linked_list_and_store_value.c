#include<stdio.h>
#include<stdlib.h>
//create a linked list and store the value
struct node
{
    int info;
    struct node *next;

};
typedef struct node *nodeptr;

nodeptr getnode(void);
nodeptr insertnode(nodeptr ptr,  int value);

int main()
{
    int i, n, value;
    nodeptr start, ptr;
    ptr = start;
    printf("Enter a negative number to terminate: ");

    do{
        scanf("%d",&value);
        if(value>=0) ptr = insertnode(ptr, value);
    }while(value>=0);
    ptr-> next = 0;
    ptr = start->next;
    while(ptr!=0)
    {
        printf("%d ",ptr->info);
        ptr = ptr->next;
    }

    
    return 0;

}

nodeptr getnode(void)
{
    nodeptr p;
    p = (nodeptr) malloc(sizeof(struct node));
    return(p);
}

nodeptr insertnode(nodeptr ptr, int value)
{
    nodeptr q;
    q = getnode();
    q->info = value;
    ptr->next = q;
    return(q);
}