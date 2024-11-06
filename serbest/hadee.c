#include <stdio.h>
#include <stdlib.h>

// Node structure definition
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation error\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to add a node to the network
void addNode(Node** head, int data) {
    Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

// Function to print the network
void printNetwork(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    Node* network = NULL;

    // Adding nodes to the network
    addNode(&network, 1);
    addNode(&network, 2);
    addNode(&network, 3);
    addNode(&network, 4);

    // Printing the network
    printNetwork(network);

    // Freeing allocated memory
    Node* temp;
    while (network != NULL) {
        temp = network;
        network = network->next;
        free(temp);
    }

    return 0;
}