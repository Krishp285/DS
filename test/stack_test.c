//Create stack of 7  size with character data type and perform  push , pop and display function

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 7

char stack[size];
int top=-1;

void push(char str)
{
    if(top == size-1)
    {
        printf("\noverflow stack");
    }
    else
    {
        top++;
        stack[top] = str;
    }
}
void pop()
{
    if(top == 0)
    {
        printf("\nstack underflow");
    }
    else
    {
        top--;
        printf("\n%c pop",stack[top]);
        
    }
}
void display()
{
  for (int i = top; i >=0; i--)
    {
        printf("\n%c", stack[i]);
    }
}
int main()
{   
    // char str;
    // printf("Enter a no:");
    // scanf("%c",&str);
    push('a');
    display();
    return 0;
}