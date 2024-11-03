#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
    char items[MAX];
    int top;
} Stack;

void initialize(Stack *s) {
    s->top = -1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

int isFull(Stack *s) {
    return s->top == MAX - 1;
}

void push(Stack *s, char value) {
    if (!isFull(s)) {
        s->items[++(s->top)] = value;
    }
}

char pop(Stack *s) {
    if (!isEmpty(s)) {
        return s->items[(s->top)--];
    }
    return '\0';
}

char peek(Stack *s) {
    if (!isEmpty(s)) {
        return s->items[s->top];
    }
    return '\0';
}

int isMatchingPair(char left, char right) {
    return (left == '(' && right == ')') ||
           (left == '{' && right == '}') ||
           (left == '[' && right == ']');
}

int areParenthesesBalanced(char *expr) {
    Stack stack;
    initialize(&stack);

    for (int i = 0; expr[i] != '\0'; i++) {
        if (expr[i] == '(' || expr[i] == '{' || expr[i] == '[') {
            push(&stack, expr[i]);
        } else if (expr[i] == ')' || expr[i] == '}' || expr[i] == ']') {
            if (isEmpty(&stack) || !isMatchingPair(pop(&stack), expr[i])) {
                return 0;
            }
        }
    }

    return isEmpty(&stack);
}

int main() {
    char expr[MAX];
    printf("Enter an expression: ");
    scanf("%s", expr);

    if (areParenthesesBalanced(expr)) {
        printf("Balanced\n");
    } else {
        printf("Not Balanced\n");
    }

    return 0;
}