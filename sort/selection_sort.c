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
void selection()
{
 int i,j,min,tmp; 

    for(i=0;i<SIZE;i++){
        min=i; 
        for(j=i+1;j<SIZE;j++){
            if(a[min] > a[j]){
                min = j; 
            }
        }
        //swap 
        tmp = a[min];
        a[min] = a[i];
        a[i] = tmp;     
    }
}
int main()
{

getdata();
printf("\nbefore sorting");
 printf("\n");
display();
selection();
printf("\nafter sorting");
printf("\n");
display();
return 0;
}