#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;

} *head = NULL, *last = NULL;

void addnode(int data)
{
    struct node *temp;
    if (head == NULL)
    {
        head = malloc(sizeof(struct node));
        head->data = data;
        head->next = NULL;
        head->prev = NULL;
        last = head;
    }
    else
    {
        temp = malloc(sizeof(struct node));
        temp->data = data;
        temp->next = NULL;
        temp->prev = last;
        last->next = temp;
        last = temp;
    }
}
void addBeg(int data)
{
    struct node *temp;
    if (head == NULL)
    {
        addnode(data);
    }
    else
    {
        temp = malloc(sizeof(struct node));
        temp->data = data;
        head->prev = temp;
        temp->next = head;
        temp->prev = NULL;
        head = temp;
    }
}

// void addNodeAny(int num , int source)
// {

//     struct node *p,*temp;
//     if(head == NULL)
//     {   
//         addNode(num);
//         return;
//     }
//     for(p = head ; p != NULL ; p=p->next)
//     {
//     if(p ->data == source)
//     {
//         break;
//     }
//     }
//     if(p == NULL)
//     {
//         printf("\ninvalid source : %d ",source);
//     }
//     else if(p == last)
//     {
//         addNode(num);
//     }
//     else
//     {
//         temp = malloc(sizeof(struct node));
//         temp->data = num;
//         temp->next = p->next;
//         p->next = temp;
//     }
// }

void deleteBeg()
{
    struct node *p = head;
    head = head->next;
    free(p);
    head->prev = NULL;
}

void deleteLAst()
{
    struct node *p = last->prev;
    p->next = NULL;
    free(last);
    last = p;
}

void display()
{
    struct node *p;
    for (p = head; p != NULL; p = p->next)
    {
        printf("%d ", p->data);
    }
}

void reverseDisplay()
{
    struct node *p;
    for (p = last; p != NULL; p = p->prev)
    {
        printf("%d ", p->data);
    }
}
int main()
{
    int choice, num, source;
    while (-1)
    {
        printf("\n0 for exit");
        printf("\n 1 for add node = end");
        printf("\n 2 for add node = begin");
        printf("\n 3 for  add node = any");
        printf("\n 4 for delete node = end");
        printf("\n5 for delete node = begin");
        printf("\n6 for  delete node = any");
        printf("\n7 for simple display ");
        printf("\n8 for display reverse ");

        printf("\nenter choice :- ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter number");
            scanf("%d", &num);
            addnode(num);
            break;
        case 2:
            printf("\nEnter number");
            scanf("%d", &num);
            addBeg(num);
            break;
        case 3:printf("\nEnter number");
             scanf("%d", &num);
             printf("\nEnter source :-");
             scanf("%d", &source);
             addNodeAny(num,source);
             break;
        case 4:
            deleteLAst();
            break;
        case 5:
            deleteBeg();
            break;
        case 6:
            break;
        case 7:
            display();
            break;
        case 8:
            reverseDisplay();
            break;
        case 0:
            exit(0);
        }
    }

    return 0;
}