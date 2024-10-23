/*+ - * / ^
A,B,C gibi
*/


#include "stdio.h"
#define QUEUE_SIZE 10

typedef struct {
    int cnt;
    struct node *front;
    struct node *rear;


}queue;



void initialize(queue *q)
{

    q->cnt=0;
    q->front=q->rear=NULL;
}


int isFull(queue *q)
{

    if(q->cnt == QUEUE_SIZE)
        return 1;
    else return 0;



}


int isEmpty(queue *q)
{

    if(q->cnt == 0)
        return 1;
    else return 0;



}





int main()
{





}

//aboo kaç kaç sahibi geldi

