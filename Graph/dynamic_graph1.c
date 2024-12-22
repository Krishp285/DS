#include<stdio.h>
#include<stdlib.h>

struct graph
{
    int totaledges;
    int totalvertex;

};
struct edges
{
    int src;
    int dest;

};
int main()
{
    int i;
    int src, dest;
    struct graph g;
    struct edges *e;

    printf("\ntenter number of vertex and edges :- ");
    scanf("%d%d",&g.totaledges,&g.totalvertex);

    g.totaledges = g.totaledges * 2;

    e = calloc(g.totaledges,sizeof(struct edges));

    for(i=0;i<g.totaledges;i++)
    {
        printf("\nenter source and destination :- ");
        scanf("%d%d",&src,&dest);

        e[i].src = src;
        e[i].dest = dest;

        i++;
        
        e[i].src = dest;
        e[i].dest = src;
    }

    printf("\nEnter source :");
    scanf("%d", &src); 

    for(i=0;i<g.totaledges;i++)
    {
        if(src == e[i].src)
        {
                printf("%d ",e[i].dest);
        }
    }
    return 0;

}