/*
h1 postfix infix prefix h1
operatörler + - * / ^
operantlar  A B C gibi


Infix       Prefix    postfix
_______________________________
A+B           +AB         AB+ 
A-B+C         +-ABC       AB-C+
A-B\(C*D^E)  -A\B*C^DE    ABCDE^*\-    A-B\C*(D^E)

34*56*+   



*/

//klavyeden girilen infix ifadeyi postfix ifadeye çeviren program       
#include <stdio.h>
#include <string.h>
#define STACK_SIZE 100
#define EMPTY_STACK_VALUE -1

typedef struct {
    char data[STACK_SIZE];
    int top;
} stack;

void reset(stack *stk) {
    stk->top = -1;
}

void push(stack *stk, char x) {
    if (stk->top == STACK_SIZE - 1) {
        printf("Stack Dolu\n");
    } else {
        stk->top = stk->top + 1;
        stk->data[stk->top] = x;
    }
}

char pop(stack *stk) {
    if (stk->top == -1) {
        printf("Stack boş\n");
        return EMPTY_STACK_VALUE;
    }
    return stk->data[stk->top--];
}

int isOperand(char x) {
    if (x == '+' || x == '-' || x == '*' || x == '/' || x == '^') {
        return 0;
    } else {
        return 1;
    }
}

int precedence(char x)
{
    if(x == '+' || x == '-')
    {
        return 1;
    }
    else if(x == '*' || x == '/')
    {
        return 2;
    }
    else if(x == '^')
    {
        return 3;
    }
    else
    {
        return 0;
    }
}

int main() {
    stack s;
    char infix[100];
    char postfix[100];
    int i = 0, j = 0;
    reset(&s);
    printf("Infix ifadeyi giriniz: ");
    if (fgets(infix, 100, stdin) != NULL) {
        // fgets newline karakterini de alır, bunu kaldırmak için:
        infix[strcspn(infix, "\n")] = '\0';
        printf("Girdiğiniz ifade: %s\n", infix);
    } else {
        printf("Girdi alınamadı.\n");
    }
    while(infix[i] != '\0')
    {
        if(isOperand(infix[i]))
        {
            postfix[j++] = infix[i];
        }
        else
        {
            while(s.top != -1 && precedence(s.data[s.top]) >= precedence(infix[i]))
            {
                postfix[j++] = pop(&s);
            }
            push(&s,infix[i]);
        }
        i++;
    }
    while(s.top != -1)
    {
        postfix[j++] = pop(&s);
    }
    postfix[j] = '\0';
    printf("Postfix ifade: %s",postfix);
    return 0;
}
