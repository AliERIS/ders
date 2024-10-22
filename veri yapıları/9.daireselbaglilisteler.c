#include "stdio.h"

#include "stdlib.h"


struct node
{
int data;

struct node next;


};

struct node *addfront(struct node *head, int key)
{

struct node *temp = (struct node *) malloc(sizeof(struct node));


if(head == NULL)
{
    temp->next = temp;

}

temp->next=head;
struct node *last=





}


int main()
{




}