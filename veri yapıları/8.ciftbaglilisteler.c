#include "stdio.h"
#include "stdlib.h"

struct node{

int data;
struct node *next;
struct node *prev;
};



struct node *addfront(struct node *head,int x)
{

struct node *temp = (struct node*)malloc(sizeof(struct node));
temp -> data = x;
temp -> next = head;
temp-> prev = NULL;
if (head !=NULL)
{

head -> prev = temp;

}

head = temp;
return head;

}






int main()
{

struct node *head = NULL;



}