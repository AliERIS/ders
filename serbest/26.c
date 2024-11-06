#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *right;
    struct node *left;
    struct node *up;
    struct node *down;
    int x;
    int y;
};

struct web {
    struct node *nodes[10][10]; // nodeları tutmasın adreslerini tutsun
    struct node *start;
};

int main() {
    struct web *web1 = (struct web *)malloc(sizeof(struct web)); // web1 için bellek ayır

    // Her node için bellek ayır ve bağlantıları kur
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            web1->nodes[i][j] = (struct node *)malloc(sizeof(struct node)); // Her node için bellek ayır
            web1->nodes[i][j]->data = (i + 1) * (j + 1);
            web1->nodes[i][j]->x = i;
            web1->nodes[i][j]->y = j;

            
           
        }
    }
// Sağ, sol, yukarı ve aşağı bağlantıları kur

    for (int i = 0; i < 10; i++) {   
        for (int j = 0; j < 10; j++) {
            if (j < 9) {
                web1->nodes[i][j]->right = web1->nodes[i][j + 1];
            } else {
                web1->nodes[i][j]->right = NULL;
            }

            if (j > 0) {
                web1->nodes[i][j]->left = web1->nodes[i][j - 1];
            } else {
                web1->nodes[i][j]->left = NULL;
            }

            if (i < 9) {
                web1->nodes[i][j]->down = web1->nodes[i + 1][j];
            } else {
                web1->nodes[i][j]->down = NULL;
            }

            if (i > 0) {
                web1->nodes[i][j]->up = web1->nodes[i - 1][j];
            } else {
                web1->nodes[i][j]->up = NULL;
            }
        }
    }



    // Node'ları yazdır
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("x coordinate: %d  y coordinate: %d\n", web1->nodes[i][j]->x, web1->nodes[i][j]->y);
        }
        printf("\n");
    }


     //user input ile hareket
 
      int choose;
    struct node *current = web1->nodes[0][0];
    while(choose != 0)
    {
        printf("1: right\n2: left\n3: up\n4: down\n0: exit\n");
        scanf("%d", &choose);
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
    printf("Current node data: %d Your coordinate x : %d y: %d\n", current->data, current->y, current->x);
    }

    
  






    // Belleği serbest bırak
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            free(web1->nodes[i][j]);
        }
    }
    free(web1);

    return 0;
}