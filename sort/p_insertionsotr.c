#include<stdio.h>
#define SIZE 5
int a[SIZE];

void getdata()
{
    int i;
    for(i=1;i<SIZE;i++)
    {
    printf("enter the number a[%d] :- ",i);
    scanf("%d",&a[i]);
    }
}
void display()
{
int i;
    for(i=1;i<SIZE;i++)
    {
    printf("%d",a[i]);
    }
}
void insertion()
{
int i,j,temp=0;

for(i=1;i<SIZE;i++)
{
    temp = a[i];
    for(j=i-1;j>=0;j--)
    {
        if(a[j] > temp)
        {
        a[j+1] = a[j];
        }
        else
        {
            break;
        }
    }
    a[j+1] = temp;
}
}
int main()
{

getdata();
printf("\nbefore sorting");
 printf("\n");
display();
insertion();
printf("\nafter sorting");
printf("\n");
display();
return 0;
}