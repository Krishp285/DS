#include<stdio.h>

#define Size 10

int a[] = {10,20,30,40,50,60,70,80,90,100};

void divide(int a[] , int min ,int max)
{
    int mid = (min + max ) / 2;


    if(min < max)
    {
        divide(a,min , mid);
        divide(a,mid+1 , max );


    }

        

}
int main()
{


    divide(a,0,Size-1);

    return 0;

}