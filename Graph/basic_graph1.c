#include<stdio.h>
#include<stdlib.h>


int main()
{
    int num[3][3],i,j;
    for (i = 0; i < 3 ; i++)
    {
        for(j = 0; j < 3 ; j++)
        {
            printf("\nenter num[%d][%d]:-",i,j);
            scanf("%d",&num[i][j]);
        }
    }
  
    for (int i = 0; i < 3 ; i++)
    {
        for(int j = 0; j < 3 ; j++)
        {
            if(num[i][j] != 0)
            {
                printf("\n%d - %d ->%d",i,j,num[i][j]);
            }
           
        }
    }
    return 0;
}