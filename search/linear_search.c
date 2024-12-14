#include<stdio.h>
#define SIZE 5 

int a[SIZE]; 

void getData(){
    int i;
    for(i=0;i<SIZE;i++)
    {
        printf("\nEnter value");
        scanf("%d",&a[i]); 
    }
}

void printData()
{
    int i;
    for(i=0;i<SIZE;i++)
    {
        printf("\n%d",a[i]); 
    }
}

void search(int key){
    int i; 
    int success = 0;

    for(i=0;i<SIZE;i++){
        if(a[i] == key){
            success = 1; 
            break;
        }
    }
    if(success == 1){
        printf("\n%d Found",key);
    }else{
        printf("\n%d Not Found",key);
    }
}


int main(){


    getData();
    printData();
    search(10); 
    return 0;
}