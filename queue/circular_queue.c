#include <stdio.h>
#include <conio.h>
#define size 5

int a[size];
int f = -1, r = -1;
int i;
void enqueue(int num)
{
    if (r == size - 1 && f == 0)
    {
        printf("\nqueue is full");
    }
    else if (r == f - 1)
    {
        printf("\nqueue is full");
    }
    else if (r == size - 1)
    {
        r = 0;
        a[r] = num;
    }
    else
    {
        r++;
        a[r] = num;
        if (f == -1)
        {
            f = 0; // first time only
        }
    }
}

void dequeue()
{
   
    if (f == -1)
    {
        printf("\nQueue is Empty :");
    }
    else
    {
        printf("\n%d Removed", a[f]);
        if (f == r)
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
    if (f <= r)
    {
        for (i = f; i <= r; i++)
        {
            printf("%d ", a[i]);
        }
    }
    else
    {
        for (i = f; i <= size - 1; i++)
        {
            printf("%d ", a[i]);
        }
        for (i = 0; i <= r; i++)
        {
            printf("%d ", a[i]);
        }
    }
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    dequeue();
    dequeue();
    enqueue(60);
    enqueue(70);
    enqueue(80);
    display();
    return 0;
}