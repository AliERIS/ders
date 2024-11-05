//Kuyruk yapısı

#include "stdio.h"
#include "stdlib.h"

#define QUEUE_SIZE 10

struct node{
    int data;
    struct node *next;
    
    
};



typedef struct{
    int cnt;
    struct node *rear;
    struct node *front;
}queue;



void initialize(queue *q)
{
    q->cnt = 0;
    q->front = q->rear = NULL;

}

int isFull(queue *q){

    if(q->cnt == QUEUE_SIZE)
        return 1;
    else 
        return 0; 
}

int isEmpty(queue *q){
    if(q->cnt == 0)  //q->rear == NULL da olabilir
        {
            return 1;
        }
    else return 0;


}


void enqueue(queue *q, int x )
{

if(isFull(q))
{
    printf("kuyruk zaten dolu");


}

else {
        struct node *temp = (struct node *) malloc(sizeof(struct node));
        temp->data =x;
        temp -> next = NULL; //dairesel değil neden öyle düşündün ki
        if(isEmpty(q))
        {
            q->front=q->rear=temp; 

        }
        else {
            q->rear->next = temp;
            q->rear = temp;

        }
        q->cnt++;
      
}

}




int dequeue(queue *q){     //ben yazayım önce dersten denemek istiyorum 
                            // ne durumda çalışmaz abi liste boş ise çalışmaz 
if(isEmpty(q))
{
    printf("kuyruk boş default 0 döndürülecek");
    return 0;
}
else {              //demek ki liste boş değil çok güzel //kuyruk olmamızdan ötürü ilk giren ilk çıkar demi
int temp;

temp= q->front->data;
struct node *del = q->front;
q->front = q->front->next; //yani çalışır da sanki ramin içinde geçiyoruz gibi hissettim
q->cnt--;
if(isEmpty(q))
{
    q->rear==NULL;
}
free(del);
return temp;
}


}





int main()
{



    printf("do nothing");
}