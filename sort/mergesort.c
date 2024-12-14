#include<stdio.h>
#define S1 5
#define S2 5
#define S3  S1 + S2


void merge_sort(int a[],int b[],int c[])
{
    int i=0,j=0,k=0;

    while(i < S1 && j < S2)
    {
            if(a[i]<b[j])
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

    while (i < S1)
    {
       c[k] = a[i];
       i++;
       k++;
    }
    while (j < S2)
    {
       c[k] = b[j];
       j++;
       k++;
    }
    
} 
void display(int c[])
{
    int i;
    for(i=0;i<S3;i++)
    {
        printf("\n %d",c[i]);
    }
}
int main()
{
int a[] = {10,20,30,40,50};
int b[] = {6,7,8,9,10};
int c[S3];
merge_sort(a,b,c);
display(c);
return 0;
}