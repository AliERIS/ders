#include "stdio.h"
#include "stdlib.h" //sizde cstdlib.h olabilir


//dersten önce doğrusal bağlı deniyorum oysaki benim software engineering çalışmam gerekiyordu
struct node {

    int data;
    struct node *prev;
    struct node *next;


}; //şu noktalı virgülü unutuyorum :(


struct node *addfront (struct node *head, int key) //full ezbere ve mantığını oturtmadan yazdım  bir de addfront mu olur aq
{

    if(head==NULL)
    {
        head = (struct node *) malloc(sizeof(struct node));
        head->prev=head;
        head->next=head;
        head->data=key;

    }
    else
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp -> next = head;
        temp -> prev = head -> prev;
        head -> prev -> next = temp; 
        head -> prev = temp;
        temp ->data = key;
        head = temp;        
    }
    return head;

}
struct node *addlast(struct node *head, int key)
{
    if(head==NULL)
    {
        head = (struct node *) malloc(sizeof(struct node));
        
        head->prev=head;
        head->next=head;
        head->data=key;

    }
    else{
        struct node *temp = (struct node *) malloc(sizeof(struct node));
        temp -> next = head;
        temp -> prev = head -> prev;
        head -> prev -> next = temp;
        head -> prev= temp;
        temp -> data = key;


    }
    return head;





}


// void printlistters(struct node *head) ne yapmak istediğimi anladım ama şimdi stack kasacağım nasus ile 
// {

//     if(head==NULL)
//     {
//         printf("liste boş");
//     }
//     else 
//     {
//         struct node *last =head;

//         while(last->next!= head)  // to make last to last node
//         {
//             last = last -> next;
//         }
//         int need = last->data;
//         while(last!=NULL)
//         {
//             printf("%d ",last->data);
//             last = last->prev;
//         }

//     }   
// }















int main(){ 
//menu yapmayan bizden değildir
struct node *head = NULL; //boş tanımlamazsak nasıl çağırırız diğ mi ?

int secim;
while(1)
{

printf("\n1-)Eleman Ekle\n");
printf("2-Listenin Sonuna eleman ekle\n");
scanf("%d",&secim);
switch(secim)
{
case 1:
printf("One eklenecek elemanı yaziniz");
scanf("%d",&secim);
head = addfront(head,secim);
break;
case 2:
printf("Sona eklenecek elemani yaziniz");
scanf("%d",&secim);
head = addlast(head,secim);
break;
case 3:
printlist(head);
break;



}



}




}