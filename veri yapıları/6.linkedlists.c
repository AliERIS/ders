#include "stdio.h"
#include "stdlib.h"
struct node{
    int data;
    struct node *next;
};

struct node *addfront(struct node *head, int x)
{
    struct node *temp  = (struct node*)malloc(sizeof(struct node));
    temp -> data =x;
    temp -> next =head;
    head = temp;
    return head;
}

struct node *addlast(struct node *head, int x)
{
    struct node *temp  = (struct node*)malloc(sizeof(struct node));
    temp->data =x;
    temp ->next = NULL;
    if(head==NULL)
    head=temp;
    else
    {
        struct node *last =head;
        while (last->next!=NULL)
        {
            last = last ->next;
        }
        last ->next =temp;
    }
    return head;
}

//listenin elemanlarını yazma
void printlist(struct node *head)
{
    if(head == NULL)
    printf("liste bos");
    else 
    {
        while (head!=NULL)
        {
            printf("%d",head->data);
            head =head -> next;
        }
    }
}


//listenin elemanlarını tersten yazma
void print_reverse(struct node *head)
{
    if(head==NULL)
    return;
    print_reverse(head->next);
    printf("%4d",head->data);
    
}

int main()

{
    printf("linked-list");
struct node *head = NULL;
head = addlast (head,8);
head = addfront (head,5);
head = addlast (head,2);
printlist(head);
print_reverse(head);
}