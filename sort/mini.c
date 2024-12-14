#include<stdio.h>
#define SIZE 5
int a[SIZE];

void main()
{
    int i,j,min=0,temp=0;
    for(i=1;i<SIZE;i++)
    {
    printf("enter the number a[%d] :- ",i);
    scanf("%d",&a[i]);
    }
    for(i=1;i<SIZE;i++)
    {

    printf("%d ",a[i]);
    }
    
    for(i=0;i<SIZE;i++) // 6 9 3 2 
    {
        for(j=1;j<SIZE;j++)
        {
            min = i;
            if(a[min] > a[j])
            {
                min = j;
            }

        }

        temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }

    
    for(i=1;i<SIZE;i++)
    {

    printf("%d ",a[i]);
    }
    
    
}

