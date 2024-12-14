#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head = NULL, *last = NULL;

void addNode(int num)
{
    struct node *tmp;

    if (head == NULL)
    {
        head = malloc(sizeof(struct node));
        head->data = num;
        head->next = NULL;
        last = head;
    }
    else
    {

        tmp = malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = NULL;
        last->next = tmp;
        last = tmp;
    }
}

void addNodeBeg(int num)
{
    struct node *tmp;
    if (head == NULL)
    {
        addNode(num);
    }
    else
    {
        tmp = malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = head;
        head = tmp;
    }
}

void addNodeAny(int num , int source)
{

    struct node *p,*temp;
    if(head == NULL)
    {   
        addNode(num);
        return;
    }
    for(p = head ; p != NULL ; p=p->next)
    {
    if(p ->data == source)
    {
        break;
    }
    }
    if(p == NULL)
    {
        printf("\ninvalid source : %d ",source);
    }
    else if(p == last)
    {
        addNode(num);
    }
    else
    {
        temp = malloc(sizeof(struct node));
        temp->data = num;
        temp->next = p->next;
        p->next = temp;
    }
}
void display(){
   struct node *i = head ; 

    for(i=head; i!=NULL ;i=i->next){
        printf(" %d",i->data);
    }
}

void deleteAtBeg()
{
    struct node *p;
    if(head == NULL)
    {
        printf("\n list is empty");
    }
    else
    {
        p = head;
        head = head->next;
        free(p);
    }
    
}
void deleteAtEnd()
{
    struct node *p;
    for (p = head; p->next != last; p = p->next);
    p->next = NULL;     
    free(last);
    last  = p;
}

void deleteAny(int num)
{
     struct node *p, *q;

    if (head == NULL)
    {
        printf("\nList is Empty : ");
        return;
    }
    for (q = head; q != NULL; q = q->next)
    {
        if (q->next->data == num)
        {
            break;
        }
    }
    if (q == NULL)
    {
        printf("\nInvalid Source");
    }
    else
    {
        p = q->next;

        if (p == head)
        {
            deleteBeg();
        }
        else if (p == last)
        {
            deleteAtEnd();
        }
        else
        {
            q->next = p->next; 
            free(p); 
        }
    }
}
void search(int search)
{
    struct node *i;
        
    for(i=head; i!=NULL ;i=i->next)
    {
        if (i->data == search)
        {
             printf("\n %d found",search);
             break;
        }
        else
        {
            printf("\n%d not found",search);
        }
       
    }

}

void sum()
{
    struct node *i;
    int sum;
    for ( i=head; i !=NULL; i=i->next)
    {
        sum = sum + i->data;
    }
    printf("\n sum is %d",sum);
}

void max()
{
    struct node *i;
    int max=0;
    for ( i=head; i !=NULL; i=i->next)
    {
        if(max < i->data)
        {
            max = i->data;
        }
    }
     printf("\n max is %d",max);
}
int main()
{
    int choice,num,source;
    while (-1)
    {
        printf("\n0 for exit");
        printf("\n 1 for add node = end");
        printf("\n 2 for add node = begin");
        printf("\n 3 for  add node = any");
        printf("\n 4 for delete node = end");
        printf("\n5 for delete node = begin");
        printf("\n6 for  delete node = any");
        printf("\n7 for display linkedlist");
        printf("\n8 for sum ");
        printf("\n9 for search");
        printf("\n10 for max ");
        printf("\nenter choice :- ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("\nEnter number");
            scanf("%d", &num);
            addNode(num);
            break;
        case 2:
            printf("\nEnter number");
            scanf("%d", &num);
            addNodeBeg(num);
            break;
        case 3:printf("\nEnter number");
            scanf("%d", &num);
            printf("\nEnter source :-");
            scanf("%d", &source);
            addNodeAny(num,source);
            break;
        case 4:
            deleteAtEnd();
            break;
        case 5:
            deleteAtBeg();
            break;
        case 6:
            break;
        case 7:
            display();
            break;
        case 8:
            sum();
            break;
        case 9:
            printf("\nenter number:-");
            scanf("%d",&search);
            search(num);
            break;
        case 10:
            max();
            break;
        case 0:
            exit(0);

        }
    }
  
    return 0;
}