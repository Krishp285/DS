#include <stdio.h>
#include <stdlib.h>
#define size 5

int f = -1, r = -1;
int a[size];

void enqueue(int num)
{
    if (r == size - 1)
    {
        printf("queue is full");
    }
    else
    {
        r++;
        a[r] = num;
        if (f == -1)
        {
            f = 0;
        }
    }
}

void dequeue()
{
    if (f == -1)
    {
        printf("\nqueue is empty");
    }
    else
    {
        printf("\n %d removed", a[f]);
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
    int i;
    for (i = f; i <= r; i++)
    {
        printf(" %d ", a[i]);
    }
    printf("\n");
}

void max()
{
    int i, max = 0;
    for (i = f; i <= r; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }

    printf("\n max is %d ", max);
}

void sort()
{
    int i, j, min, tmp;

    for (i = 0; i <= size; i++)
    {
        min = i;
        for (j = i+ 1; j < size; j++)
        {
            if (a[min] > a[j])
            {
                min = j;
            }
        }
        tmp = a[min];
        a[min] = a[i];
        a[i] = tmp;
    }
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(90);
    enqueue(50);
    display();
    dequeue();
    dequeue();
    display();
    sort();
    display();
    max();
    return 0;
}