
//                        This is 
//
//


#include "stdio.h"
#include "stdlib.h"


struct node  {                          //  ______address1________     ______address2_______
struct node *prev;                     //  |prev  |data  |next  |     |prev  |data  |next  |
int data;                              //  |______|______|______|     |______|______|______|
struct node *next;                     //
                                      //    prev of node at address1 is NULL                 prev of node at address2 is address1
                                      //    next of node at address1 is address2             next of node at address2 is NULL

};




struct node *addfront(struct node *head, int x)
{

    struct node *temp  = (struct node*)malloc(sizeof(struct node)); //memory allocation 
    temp -> data =x;
    temp -> next = head;
    temp -> prev = NULL;


    if(head != NULL)
    {
    head->prev = temp;
    }
    head = temp;
    return head;
}



//burada biraz acı çektim kodu kısaltmak için ek kullandığımız değişkenleri kullanmadığımızda patlıyor
// bir değeri ötekine eşitliyorsun ama o liste üzerinde kayınca asıl refere aldığımız kaymıyor
//bunu nasıl anlatabilirim bilmiyoerum
// bu dersi bu dönem vermek istiyorum ve en basitinden bir listede bile bu denli sıyırmak gerekmiyor
// bu sebeple diyoru 29yo retard was here 




// sona eleman ekleme
struct node *addlast(struct node *head, int x)
{
    struct node *temp  = (struct node*)malloc(sizeof(struct node));
    temp->data =x;
    temp -> next = NULL;

    if(head==NULL)
    {
        temp->prev = NULL;
        head = temp;
    }
    else 
    {

        struct node *last = head;
        while(last->next!=NULL)
        {
            last=last->next;
        }
        last -> next = temp;
        temp -> prev = last;
    
    }
return head;

}

//yani iteratif olmayacak sonuçta nasıl olur balım
void printlist(struct node *head)
{

if(head==NULL)
{
    printf("liste boş");
}
else 
{
    while(head!=NULL)
    {
        printf("%d %p \n",head->data,head);
        head = head ->next;


    }


}
}


//bi iteratif deneyeceğim belki sonra rekürsif de yazarım
void printlistters(struct node *head)
{

    if(head==NULL)
    {
        printf("liste boş");
    }
    else 
    {
        struct node *last =head;

        while(last->next!= NULL)  // to make last to last node
        {
            last = last -> next;
        }

        while(last!=NULL)
        {
            printf("%d ",last->data);
            last = last->prev;
        }

    }   
}

//yani o leş adından da anlaşılacağı üzere
void printlistrek(struct node *head)
{

if(head==NULL)
{
    
}

if(head->next!=NULL)
    printlistrek(head->next);

printf("%d ", head->data);

}


//bak bu en zoru olmasa da en zorun bir öncesi verilen değeri listeden silmek ha liste kolay arası ayrı
//eksik durumlar var son datayı silemiyor ilkini de silemiyordu düzelttim
struct node *delete(struct node *head, int key)
{

    struct node *find = head;

    while(find -> data != key)
    {
        find = find -> next;
       
    
    }
     if(find->next == NULL)
    {
            find -> prev -> next = NULL;
            
    }
    
    else if (find->prev == NULL)
    {
        head = head->next; //head 'i güncellemen lazım ilk node böyle sihirli bir şey o yanlış olursa her şey yanlış oluyor bunun üzerinden kayarak gidiyoruz 
        find -> next -> prev = NULL;
    
    }
    else 
    {
        find -> prev -> next = find -> next;
        find -> next -> prev = find -> prev;


    }
    
    free(find);

    return head;

}





//ve gönüllerin birincisi destroy 

struct node *destroy(struct node *head)
{

struct node *temp = head;


while(head!=NULL)
{
    head =head->next;

    free(temp);
    temp=head;

    


}

return head;





}



























int main()
{

struct node *head = NULL;


//predefined list
head=addlast(head,4);
head=addlast(head,8);
head=addlast(head,15);
head=addlast(head,16);
head=addlast(head,23);
head=addlast(head,42);





//menu yapmamız lazım 

int secim;
while(1)
{
printf("\n1-)Listenin Onune eleman ekle\n");
printf("2-)Listenin Sonuna elaman ekle   \n");
printf("3-)Listeyi yazdır   \n");
printf("4-)Listeyi tersten yazdir\n");
printf("5-)Listeyi rekürsif tersten yazma\n");
printf("6-)Verilen bir değeri silme \n");
printf("7-)Bütün listeyi silme\n");




scanf("%d",&secim);

switch(secim)
{
    case 1:
    printf("Listenin onune eklenecek elemani yaziniz");
    scanf("%d",&secim);
    head = addfront(head,secim);
    break;
    
    case 2:
    printf("Listenin sonuna eklenecek elamani yaziniz");
    scanf("%d",&secim);
    head=addlast(head,secim);
    break;
    
    case 3: //listeyi yazdir
    printlist(head);
    break;
    
    case 4: //listeyi tersten yazma
    printlistters(head);
    break;

    case 5: //listeyi tersten yazma rekürsif
    printlistrek(head);
    break;

    case 6: //verilen değeri listedeki ilk bulduğu yerden silen fonksiyounu
    printf("silinecek degeri giriniz");
    scanf("%d",&secim);
    head = delete(head,secim);
    break;

    case 7:
    head = destroy(head);
    break;
}






}





}