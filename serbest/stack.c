#include "stdio.h"
#include "stdlib.h"
#define STACK_SIZE 4
#define EMPTY_STACK_VALUE -1;

typedef struct {  //öğrenene kadar auto-complete kapalı yok

    int data[STACK_SIZE];
    int top ;



}stack;



//ilklendirme 
void reset(stack *stk){

    stk -> top = -1;

}

void push(stack *stk, int x)
{
    if(stk -> top == STACK_SIZE-1) //köylü gibi derste 3 demişim tekrarları izlemek utanç verici oluyor
    {
        printf("Stack Dolu"); //şarjor dolu mu dedi oyun yazarken bundan yapmayalım mı?
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
    return EMPTY_STACK_VALUE; //şu şekil şovunu yapacaksın eskiden görürdüm de anlamazdım   
}

 return stk->data[stk->top--]; //yani bence çok iğrenç
 //ve hata yapma olasılığım çok fazla
 //çünkü hala beynimle değil sezgisel şekilde kod yazıyorum
 //aşırı zararlı 

}






int main(){
    stack s;
    reset(&s);
    push(&s,8);
    push(&s,3);
    push(&s,2);
    push(&s,7);
    push(&s,6);
    printf("%d\n",pop(&s));
    printf("%d\n",pop(&s));
    printf("%d\n",pop(&s));
    printf("%d\n",pop(&s));
    printf("%d\n",pop(&s));
    //derste outputu eksik yazmışım    
}