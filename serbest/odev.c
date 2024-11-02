#include "stdio.h"
#include "stdlib.h" 

struct node //çift bağlı liste
{
    int data;
    struct node *next;
    struct node *prev;
};

//ÖDEV: ÇBL de listeyi tersten özyineleme olmadan yazan fonksiyon
void terstenyazdir(struct node *head) 
{

    if(head == NULL)
    {
        printf("Liste Boş");
    }
    else 
    {
        struct node *dolas = head;
        while(dolas -> next != head)  //dolas'ın next'i head olmayınca kadar yani son eleman olmayana kadar devam edecek
        {
            dolas = dolas -> next;  //son eleman olmadığı sürece liste içinde ilerle
            //sondan bir önceki düğümdeyken bir kere daha dolas = dolas -> next çalışacak
            //ve en sonunda dolas son düğüm olmuş olacak ve while döngüsü daha çalışmayacak
        }
        while(dolas!=head) //dolas head olmadığı sürece tüm değerleri tersten yazacak ancak head'in değerini yazamayacak last nodu başka bir değere atasam bile sonuca gidemedim hep while döngüsünün dışına bir printf ile yazmam gerekiyor.
        {
            printf("%d \n",dolas->data); 
            dolas = dolas -> prev;  
        }
        printf("%d \n",dolas->data); //
                

    }



}



//çalışır bir çift bağlı liste oluşturabilmem için minimal diğer fonksiyonları ekliyorum
struct node *addlast(struct node *head, int ekle)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    if(head == NULL) 
    {
        temp ->next  = temp;
        temp ->prev  = temp;
        temp -> data = ekle;
        head = temp;
    }
    else
    {
        temp -> next = head;
        temp -> prev = head -> prev;
        head -> prev -> next = temp;
        head -> prev = temp;
        temp -> data = ekle;
    }
    return head;

}





int main()
{

struct node *head = NULL; //Boş Bir Çift Bağlı Liste oluşturdum
 head = addlast(head, 4);
 head = addlast(head, 8);
 head = addlast(head, 15);
 head = addlast(head, 16);
 head = addlast(head, 23);
 head = addlast(head, 42); 
//listem son halinde 4-8-15-16-23-42
 
terstenyazdir(head); //dönmesini beklediğim değer 42 23 16 15 8 4
//boş liste olarak çalıştırdığımda sıkıntı yok





}

