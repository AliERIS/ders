#include "stdio.h"
#include "stdlib.h" //for malloc
//struct reis'in dersinin tekrarında tuttuğum not source file 



struct node {
    int data;
    struct node *next; //çok ilginç bir kafa bu 
};

//listenin başına eleman ekleme
struct node *addfront(struct node *head, int x)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp -> data = x;
    temp -> next = head; 
    head = temp;
    return head;   

}
//listenin sonuna eleman eklemek
struct node *addlast(struct node *head, int x)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp -> data = x;
    temp -> next = NULL;
    if (head == NULL)
        head = temp;
    else {
        struct node *last = head;

        while (last->next != NULL) //bu döngü bittikten sonra last hangi düğüm olacaktır?
        {
            last = last -> next;
        }
        last -> next = temp;
    }
    return head;

}


//listenin elemanlarını yazma

void printlist( struct node *head)
{
    if (head ==NULL)
    {
        printf("liste bos habarın ola");
    }
    else 
    {
        while (head !=NULL)
        {
            printf("%d",head->data);
            head = head->next;
        }
    } 

}


//listenin elemanlarını tersten yazma
void print_reverse(struct node *head){

    if(head==NULL)
    return;
    print_reverse(head->next);
    
    printf("%4d",head->data);



}





int main()
{

//kendi verdi main içini
struct node *head =NULL;
head = addlast(head,8);
head = addfront (head,5);
head = addlast (head,2);
printlist(head);
print_reverse(head);




//return 0;    
}


/*
tek bağlı listeler (next)

çift bağlı listeler (next+previous)


dairesel bağlı listeler

*/
/*
1 liste oluşturma
2 listeye eleman ekleme
3 listeden eleman silme
4 arama
5 listenin elemanlarını sayma
6 listenin elemenalrını yazma
7 sıralama (değerlerine göre)

*/