#include<stdio.h>
#include<stdlib.h>

struct Student
{
    int rank;
    char batch[30];
    char collagename[30];
    char name[30];
};

int main()
{
 
    struct Student *s ;
    int n;

    printf("\nenter the siz e of array :- ");
    scanf("%d",&n);
   
   s= calloc(n,sizeof(struct Student));

   for(int i = 0;i<n;i++)
   {
   printf("\nenter name batch collage name rank :-");
   scanf("%s %s %s %d",&s[i].name,&s[i].batch,&s[i].collagename,&s[i].rank);
   }

    for(int i = 0;i<n;i++)
   {
   printf("\nname = %s \n batch = %s \n collage name = %s  \n rank = %d ",s[i].name,s[i].batch,s[i].collagename,s[i].rank);
   }

   
   free(s);
    
    return 0;
}


