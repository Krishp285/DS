#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
int main()
{
    int num[]={90,40,50};
    struct node *root = NULL;
    struct node *temp = NULL;
    //struct node * leftt = NULL;

   

    if(root == NULL)
    {
        root = malloc(sizeof(struct node));
        root->data = num[0];
        root->left = NULL;
        root->right = NULL;

        
    }
    else
    {
        if(root->left == NULL)
        {
            root->left = malloc(sizeof(struct node));
            root->left->data = num[1];
            root->left->left = NULL;
            root->left->right = NULL;
            printf("left");
        }
        else
        {
            root->right = malloc(sizeof(struct node));
            root->right->data = num[2];
            root->right->left = NULL;
            root->right->right = NULL;
             printf("right");
        }
    }
    printf("hi");
    printf("%d %d %d",root->data,root->left->data,root->right->data);
 
    return 0;
}
