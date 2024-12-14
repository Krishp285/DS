#include<stdio.h>
#include<stdlib.h>
#define s 5

int top =-1;
int stack[s];
void push(int num)
{
    if(top == s-1)
    {
        printf("\noverflow");
    }
    else
    {
        top++;
        stack[top] = num;
    }
}

void pop()
{
    if(top == -1)
    {
        printf("\nunderflow");
    }
    else
    {
        
        printf("\n%d pop",stack[top]);
        top--;
    }
}

void peep(int location)
{
    int index;
    index = location - top + 1;

    for(int i = 0 ;i< top ; i++)
    {
        if(stack[index]  == num)
        {
            break;
        }
    }
    printf("%d found at %d ",num,index);
}

void change(int num , int location)
{
     int index;
    index = location - top + 1;

     for(int i = 0 ;i< top ; i++)
    {
        if(stack[index] == num)
        {
            stack[index] = num;
        }
    }
    printf("%d found at %d ",num,index);
}

void display()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf(" %d", stack[i]);
    }
}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    display();
    pop();
    display();
    peep(20,);
    return 0;
}