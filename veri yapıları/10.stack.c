#include <stdio.h>
#define STACK_SIZE 100


typedef struct {

int data[STACK_SIZE];
int top;


}stack;


void reset(stack *stk){
stk ->top = -1;

}

void push (stack *stk, int x){

    if(stk->top == STACK_SIZE -1)
    {
        printf("stack dolu");
    }

    else
    {
        stk -> top++;
        stk -> data[stk -> top] = x ;

    }

}

int pop(stack *stk)
{
if(stk->top==-1){
    printf("stack boş");
    return -1;
}
else{
int x = stk ->data[stk->top];
stk->top--;
return x;

}



}






int main()
{





}