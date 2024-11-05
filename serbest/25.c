//çünkü neden olmasın
//assisted açık ama

#include <stdio.h>
#include <stdlib.h>  //lazım olabilir diye kütüphane eklemek :D
#define WEB_SIZE 50
// ağ yapısı oluşturayım

struct node {
    int data;
    struct node *up;
    struct node *down;
    struct node *right;
    struct node *left;
    int posx, posy; //pozisyonlarını da ekleyeyim sence bu bir node mu 

}; //yaptığım hatayı :(


struct web
{
    int pos[WEB_SIZE][WEB_SIZE]; //yani aslında 2 boyutlu bir matris ama geçişleri node üzerinden yapıyorum (ama neden) //çok işe yaramadı gibi yoo sen node a x y ekle bunu la listeye ekle ama o zaman neden node yapısı kurasın ki? düşünmek lazım direkt koda girişme
    struct node *head; //bu da ilk node
    //struct node *tail; yani gerek var mı? belki sol en alt sağ en alt sol en üst sağ en üstü tutturabilirim
    struct node *bottomleft;
    struct node *bottomright;
    struct node *topleft;
    struct node *topright;  
};



struct node *addright(struct node *n)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if(n == NULL)
    {
        n = newnode;
        n->left = NULL;
        n->right = NULL;   
        n->up = NULL;
        n->down = NULL;
        n->posx = 0;
        n->posy = 0;
        return n;
    }

    else
    {
        if(n->right != NULL)
    {
        pritnf("right node already exists\n");
        return n->right;
    }
    else {
        
        n->right = newnode;
        newnode->left = n;

        return newnode;
    }
    
    
    
    }

    
    
}










int main()
{
    
}

