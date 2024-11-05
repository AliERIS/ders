//çünkü neden olmasın 
//assisted açık ama

#include <stdio.h>
#include <stdlib.h>  //lazım olabilir diye kütüphane eklemek :D

//he ağ yapısı oluşturayım

struct node {
    int data;
    struct node *up;
    struct node *down;
    struct node *right;
    struct node *left;
    int posx, posy; //pozisyonlarını da ekleyeyim
};




//şimdi head mi diyeyim aslında 0,0 ı gösteren bir pointer olmalı yani pointer diyemem de ey copilot

struct node *addright(struct node *cell, int key)

{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = key;
    temp->up = NULL;
    temp->down = NULL;
    temp->right = NULL;
    temp->left = cell;
    temp->posx = cell-> posx+1;
    temp->posy = cell-> posy;
    cell->right = temp;
    return temp;
}



void initialize(struct node *head)
{
    head->data = 0;
    head->up = NULL;
    head->down = NULL;
    head->right = NULL;
    head->left = NULL;
    head->posx = 0;
    head->posy = 0;
}


int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node)); //mantıklı mı bence hayır
    initialize(head);
    return 0;
}

