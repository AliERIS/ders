#include "stdio.h"
#include "stdlib.h"
#define STACK_SIZE 5

typedef struct {
    int data[STACK_SIZE];
    int top;
}stack;


void reset(stack *stk){
    stk -> top = -1;
}


void push(stack *stk, int x)
{
    if(stk -> top == STACK_SIZE-1)
    {
        printf("Stack Dolu");
    }
    else{
        stk ->top= stk->top+1;
        stk-> data[stk -> top] = x;
    }
}

int pop(stack *stk){
    if(stk->top==-1)
    {
        printf("stack boş");
        return -1;
    }
    return stk->data[stk->top--];
}



int main(){
stack s;
int A[7] = {3,6,8,11,15,20,25};
int n = 0,i;
reset(&s);

for(i =0; i<7; i++)
{
    push(&s,A[i]); //3 6 8 11 15 stack size 5 olduğu için 20 ve 25 eklenmeyecek
    
}
for(i=1;i<=3;i++)
{
    n=n+pop(&s); //15 11 8 son eklenen üstten çıkacak küfeden toplanınca 34
}
for(i=1;i<=6;i++){
    n=n-pop(&s); //6 3 34-6-3=25 stack boş oldupğu için -1 dönecek  25 + 7
}
printf("N = %d",n); 

}