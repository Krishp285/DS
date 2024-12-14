#include<stdio.h>
#include<conio.h>
#define size 5

int a[size];
int f = -1,r=-1;
void enqueue(int num)
{
    if(r == size - 1)
    {
        printf("\nqueue is full");
    }
    else
    {
        r++;
        a[r] = num;
        if(f==-1)
        {
                f = 0;
        }
      
    }
}
void dequeue()
{
    if(f == -1)
    {
        printf("\nqueue is empty");
    }
    else
    {
        printf("\n%d is removed",a[f]);
        if(f == r)
        {
            f = -1;
            r = -1;
        }
        else
        {
            f++;
        }
    }
}
void display()
{
    for(int i =f ;i<=r ;i++)
    {
        printf("%d",a[i]);
    }
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    display();
    dequeue();
    display();
    return 0;
}
