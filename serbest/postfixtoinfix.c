#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

// Stack structure
typedef struct {
    char* arr[MAX];
    int top;
} Stack;

// Function to initialize the stack
void initStack(Stack* stack) {
    stack->top = -1;
}

// Function to check if the stack is empty
int isEmpty(Stack* stack) {
    return stack->top == -1;
}

// Function to push an element to the stack
void push(Stack* stack, char* str) {
    if (stack->top < MAX - 1) {
        stack->arr[++stack->top] = str;
    }
}

// Function to pop an element from the stack
char* pop(Stack* stack) {
    if (!isEmpty(stack)) {
        return stack->arr[stack->top--];
    }
    return NULL;
}

// Function to convert postfix to infix
char* postfixToInfix(char* postfix) {
    Stack stack;
    initStack(&stack);
    int length = strlen(postfix);

    for (int i = 0; i < length; i++) {
        if (isspace(postfix[i])) {
            continue;
        }

        if (isalnum(postfix[i])) {
            char* operand = (char*)malloc(2 * sizeof(char));
            operand[0] = postfix[i];
            operand[1] = '\0';
            push(&stack, operand);
        } else {
            char* operand2 = pop(&stack);
            char* operand1 = pop(&stack);
            int size = strlen(operand1) + strlen(operand2) + 4;
            char* expr = (char*)malloc(size * sizeof(char));
            snprintf(expr, size, "(%s%c%s)", operand1, postfix[i], operand2);
            push(&stack, expr);
            free(operand1);
            free(operand2);
        }
    }

    return pop(&stack);
}

int main() {
    char postfix[MAX];
    printf("Enter a postfix expression: ");
    fgets(postfix, MAX, stdin);
    postfix[strcspn(postfix, "\n")] = '\0'; // Remove newline character

    char* infix = postfixToInfix(postfix);
    printf("Infix expression: %s\n", infix);
    free(infix);

    return 0;
}


