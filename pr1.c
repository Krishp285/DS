#include<stdio.h>
#include<conio.h>
 int a[5];
void scan()
{
   
    printf("\nenter the element :-");
    for(int i = 0 ; i< 5 ; i++)
    {
        scanf("%d",a[i]);
    }
}
void display()
{
    int search,found=0;
    printf("\nenter the elemrnt to search :-");
    scanf("%d",&search);

    for(int i =0 ;i<5 ;i++)
    {
        if(search == a[i])
        {
                found = 1;
                break;
        }
    }
    if(found == 1)
    {
        printf("\nelement found");
    }
}
int main()
{
    scan();
    display();
    return 0;
}