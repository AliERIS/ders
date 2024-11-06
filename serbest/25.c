

#include "stdio.h"
#include "stdlib.h"
#define ROW_SIZE 10
#define COLUMN_SIZE 10


struct node{
    int data;
    struct node *right;
    struct node *left;
    struct node *up;
    struct node *down;
    int x;
    int y;
    
};

struct web {
   
    struct node nodes[ROW_SIZE][COLUMN_SIZE]; 
    struct node *start;



};



void initialize (struct web *w)
{

    for(int i=0;i<ROW_SIZE;i++)
    {
        for(int j=0;j<COLUMN_SIZE;j++)
        {
            w->nodes[i][j].data = (i+1)*(j+1);
            w->nodes[i][j].right = &w->nodes[i][j+1];
            w->nodes[i][j].left = &w->nodes[i][j-1];
            w->nodes[i][j].up = &w->nodes[i-1][j];
            w->nodes[i][j].down = &w->nodes[i+1][j];
            w->nodes[i][j].x = i;
            w->nodes[i][j].y = j;
        }
    }

w->start = &w->nodes[0][0]; //ya bunu ben yazamazdım ki 


}



void *walk(struct web *w)
{   
int choose;
    while(1)
    {

    
    printf("1-Right\n2-Left\n3-Up\n4-Down\n");
    scanf("%d",&choose);
    struct node *current = w->start;
    while(choose != 0)
    {
        switch (choose)
        {
        case 1:
            if(current->right != NULL)
            {
                current = current->right;
            }
            else
            {
                printf("There is no right node\n");
            }
            break;
        case 2:
            if(current->left != NULL)
            {
                current = current->left;
            }
            else
            {
                printf("There is no left node\n");
            }
            break;
        case 3:
            if(current->up != NULL)
            {
                current = current->up;
            }
            else
            {
                printf("There is no up node\n");
            }
            break;
        case 4:
            if(current->down != NULL)
            {
                current = current->down;
            }
            else
            {
                printf("There is no down node\n");
            }
            break;
        
        default:
            break;
        }
    }
    printf("Now you are at %d %d\n",current->x,current->y);
    }
    

}





int main()
{
struct web w;
initialize(*w);
walk(*w);
return 0;



}