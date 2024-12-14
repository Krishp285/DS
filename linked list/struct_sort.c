//dynamic memory allocation
//array dma //calloc
#include<stdio.h>
#include<stdlib.h>

struct Student {
    char name[25];
    char batch[25];
    char colgName[25];
    int rank;
}temp;

void main(){
    int totalStudents;//not used 
    printf("\nEnter the no of students: ");
    scanf("%d",&totalStudents);
    struct Student *s ;
    s= calloc(totalStudents,sizeof(struct Student));
    
    for(int i=0;i<totalStudents;i++){
    printf("\nEnter the Name batch colgName and rank");
    scanf("%s%s%s%d",&s[i].name,&s[i].batch,&s[i].colgName,&s[i].rank);
    }
    for(int i=0;i<totalStudents;i++){
    printf("\nName:%s\tBatch:%s\tColgName:%s\tRank:%d",s[i].name,s[i].batch,s[i].colgName,s[i].rank);
    }
    printf("-------------sort name----------------------------------");
    for(int l;l<totalStudents;l++){
        for(int j=l+1;j<totalStudents;j++){
            if(s[l].name>s[j].rank){
                temp=s[l];
                s[l]=s[j];
                s[j]=temp;
            }
        }
    }
   printf("-------------------------bubblesort-----------------------"); 
    for(int k;k<totalStudents;k++){
        for(int j=k+1;j<totalStudents;j++){
            if(s[k].rank>s[j].rank){
                temp=s[k];
                s[k]=s[j];
                s[j]=temp;
            }
        }
    }
    printf("\n---------------------------sorted rank-----------------------------------------");
    for(int i=0;i<totalStudents;i++){
    printf("\nName:%s\tBatch:%s\tColgName:%s\tRank:%d",s[i].name,s[i].batch,s[i].colgName,s[i].rank);
    }
    free(s);
}