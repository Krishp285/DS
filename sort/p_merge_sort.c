#include<stdio.h>

#define s1 5
#define s2 5
#define s3  s1 + s2

int a[s1] = {10,30,60,70,90};
int b[s2] = {5,19,20,40,50};
int c[s1+s2] ;

void merge_sort()
{

    int i = 0 , j=0 , k=0 ;

    while (i < s1 && j < s2)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];

            i++;

            k++;
        }
        else
        {
            c[k] = b[j];

            j++;

            k++;

        }
        
    }
    while (i < s1)
    {
       c[k] = a[i];
       i++;
       k++;
    }
    while (j < s2)
    {
       c[k] = b[j];
       j++;
       k++;
    }

    for(i=0;i< s3 ;i++)
    {
        printf("\n %d",c[i]);
    }
    
}

void main()
{

    merge_sort();
    return 0;
}