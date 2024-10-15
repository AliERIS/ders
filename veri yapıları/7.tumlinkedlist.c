#include "stdio.h"
#include "stdlib.h"

struct node   
{
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




//liste elemanlarını sayma
int count_rec(struct node *head){

if(head == NULL)
{
    return 0;
}
else
{

return 1 + count_rec(head->next);
}

}


//liste eleman silme

struct node *deletenode(struct node *head, int key)
{
    
    if(head != NULL)
    {
        struct node *temp = head;
        if(head -> data == key)
            {
                head = head -> next;
                free(temp);
            }
        else 
        {
            
            while(temp -> next -> data != key)
            {
                temp = temp -> next;
            }
                struct node *yetanothertemp;
                yetanothertemp = temp -> next;
                temp -> next = temp -> next -> next; 
                free(yetanothertemp);
        
        }
        
    }
    else // yani head == NULL so that liste boş
    {
        printf("liste boş");
    }
    return head; // bak şimdi bunu anlamış değilim void tipi bir fonksiyonla bu işlemleri yapamaz mıyım yaparsam kalıcı mı olmaz öyle bir garabet var zira programlamada

}



//tüm düğümleri yok etme

struct node *destroy(struct node *head)
{
    
    struct node *temp = head;





}

temp -> prev -> next = temp -> next;
temp -> next -> prev = temp -> prev;
free(temp)


int main()
{


struct node *head = NULL;
int b = count_rec(head);
printf("%d",b);



}

