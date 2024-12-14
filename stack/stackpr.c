#include<stdio.h>
#include<stdlib.h>
#define size 5
int a[size];
int top = -1;
void push(int num)
{
    if(top == size-1)
    {
        printf("\noverflow");
    }
    else
    {
        top++;
        a[top] = num;
        printf("%d push",num);
    }
}
void pop()
{
    if (top ==-1)
    {
        printf("\nunderflow");
    }
    else
    {
        printf("%d pop",a[top]);
        top--;

    }
    
}
void display()
{
    int i;
    for ( i = top; i >=0; i--)
    {
        printf("\n%d", a[i]);
    }
    
}
int main()
{
    int choice,num;
    while (-1)
    {
    printf("\n0 for exit");
    printf("\n1 for push");
    printf("\n2 for pop");
    printf("\n3 for peep");
    printf("\n4 for display");
    printf("\nenter choice");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1 :printf("\nenter no :-");
            scanf("%d",&num);
             push(num);
            break;
    case 2:pop();
            break;
    case 4 : display();
            break;
    default:
        break;
    }
    }
    return 0;
}