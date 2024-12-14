#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 10

struct Amazon1
{
    int product_id;
    char name[30];
    char category[30];
    int price;
    int quantity;
    int discount;
    int rating;
};

int main()
{
    struct Amazon1 a[] =
        {
            {3, "hp4", "laptop", 12000, 12, 10, 4}, {2, "hp7", "laptop", 12000, 12, 10, 4}};

    int totalproduct = 2;
    int i, choice;
    int search, j;
    char search_name[30];
    int flag = 0;
    struct Amazon1 t;
    while (-1)
    {

        printf("\n 0 for exit ");
        printf("\n 1 for add product");
        printf("\n 2 for list product");
        printf("\n 3 for search by name");
        printf("\n 4 for search by id");
        printf("\nenter the choice :-");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nenter the total no of products :- ");
            scanf("%d", &totalproduct);
            if (totalproduct < 1 || totalproduct > 10)
            {
                printf("\nenter the valid choice min 1 and max 10");
            }
            else
            {
                for (i = 0; i < totalproduct; i++)
                {
                    printf("\nenter product id  name category price quantity discount rating");
                    scanf("%-15d%-15s%-15s%-5d%-5d%-10d%-5d", &a[i].product_id, &a[i].name, &a[i].category, &a[i].price, &a[i].quantity, &a[i].discount, &a[i].rating);
                }
            }
            break;

        case 2:
            printf("\nproduct id     name         category        price     quantity    discount   rating");
            for (i = 0; i < totalproduct; i++)
            {

                printf("\n%-15d%-15s%-15s%-10d%-10d%-10d%-15d", a[i].product_id, a[i].name, a[i].category, a[i].price, a[i].quantity, a[i].discount, a[i].rating);
            }

            break;

        case 3:
            printf("\nenter the name   to search :-");
            gets(search_name);

            for (i = 0; i < totalproduct; i++)
            {
                if (stricmp(search_name, a[i].name) == 0)
                {
                    printf("\nsearch found \n %s is the name ", search_name);
                    printf("%-15d%-15s%-15s%-5d%-5d%-10d%-5d", a[i].product_id, a[i].name, a[i].category, a[i].price, a[i].quantity, a[i].discount, a[i].rating);
                }
            }
            break;

        case 4:

            for (int i = 0; i < totalproduct; i++)
            {
                for (int j = 0; j < totalproduct - 1; j++)
                {
                    if (a[j].product_id > a[j + 1].product_id)
                    {
                        t = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = t;
                    }
                }
            }

            break;
        }
    }
    return 0;
}
