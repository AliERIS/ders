//ilk kez github copilot gören köylü vo1
// dairesel bağlı tek liste
#include <stdio.h>
#include <stdlib.h>


struct node
{
    int data;
    struct node *next;
};


struct node *addfront(struct node *head, int x)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp -> data = x;
    temp -> next = head;
    //tam burada tıkandım listenin sonunu nasıl bulacağım
    //son elemanın nexti head olacak şekilde ayarlamam lazım
    //tamam derste hoca if dedi bi durup düşüncen if blabla->next == head olan yerde duracağım
    if(head == NULL){
        temp -> next = temp;
        head = temp;  //bu yok mesela kodda bence eksik 
    }
    else {
        temp->next = head;
        struct node *iter = head;
        while(iter->next != head){
            iter = iter->next;
        }
        iter->next = temp;
        head = temp; 
                
    }
    //free(temp);
   // free(iter); each undeclared identifier is reported only once for each function it appears in
    return head;
    // struct node *iter = head; //ya bu otomatik geliyor copilot korkunç bir şey 
    // while (iter -> next != head)
    // {
    //     iter = iter -> next;
    // } //vallahi kendi yazdı ben sadece düşündüm(düşünmedim bile)
    // iter -> next = temp;
    // head = temp;
    // free(iter);
    // free(temp);



}


void print_tersten(struct node *head)
{
    if(head == NULL){ //neden null geldi?
        printf("Liste boş\n");
    }
    else {
        struct node *iter = head; //tanımladım
        while(iter->next != head){ //iterin nexti head olandan bir önceki elemana kadar git

            iter = iter->next;  
        }
//copilot çok dikkatimi dağıtıyor alışamadım 
//iterin nexti head değil demek iter son eleman değil
// iter son eleman olunca iterin nexti head olacak ve daha da ileri gitmeyecek

//tamam son elemandayız çizerek baktım
        while(iter != head){  //iter head olmadığı sürece devam et
            printf("%d\n", iter->data);
            iter = iter->next; //ya abi burada iter head oluyor :(
        }

        //ödev zaten çift bağlı listede tersten özyineleme olmadan yazdırmakmış tek bağlı listede özyineleme olmadan yazdırmak değil

    }
}

void reverse(struct node *head) //son elemanı yazıyor sadece saçmaladı 
{
    if(head == NULL){
        printf("Liste boş\n");
    }
    else {
        struct node *iter = head;
        while(iter->next != head){
            iter = iter->next;
        }
        while(iter != head){
            printf("%d\n", iter->data);
            iter = iter->next;
        }
    }
}



void print(struct node *head)
{
    if(head == NULL){
        printf("Liste boş\n");
    }
    else {
        struct node *temp = head;
        while (temp->next != head)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
        printf("%d\n", temp->data); //abi bu da son elemanı yazdırmak için
    }
}



struct node *addback(struct node *head, int x)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp -> data = x;
    temp -> next = head;
    if(head == NULL){
        temp -> next = temp;
        head = temp;  //bu yok mesela kodda bence eksik
    }
    else {
        struct node *iter = head;
        while(iter->next != head){
            iter = iter->next;
        }
        iter->next = temp;
    }
    //free(temp); ram management yapmadan önce kodu çalıştırıp hata verip vermediğine bak
    return head;
}






int main()
{
struct node *head = NULL;
head = addback(head, 4);
head = addback(head, 8);
head = addback(head, 15);
head = addback(head, 16);
head = addback(head, 23); //abi ben korkmaya başladım bu lost patterniyle data eklediğimi de anladı
head = addback(head, 42);

head = addfront(head, 1);
head = addfront(head, 2);
head = addfront(head, 3);
head = addfront(head, 4);
print(head);

}