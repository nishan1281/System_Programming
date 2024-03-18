#include "stdio.h"
#include "stdlib.h"

struct Node {
    int data;
    struct Node *next;
    };

//function to create a new node:

struct Node *createNode (int value){
    struct Node *newNode = (struct Node *) malloc(sizeof (struct Node));

    if (newNode != NULL){
        newNode->data = value;
        newNode->next = NULL;
    }

    return newNode;
}

//Function to print the linked List:

void printList (struct Node *head){
    printf("Linked List:");
    while (head != NULL){
        printf("%d ->", head->data);
        head = head->next;
    }

    printf("NULL \n");
}

int main(){
    //creating nodes with values 42, 10 and 7

    struct Node *node1 = createNode(42);
    struct Node *node2 = createNode(10);
    struct Node *node3 = createNode(7);

    //Linking the nodes
    node1->next = node2;
    node2->next = node3;

    //printing the linked list:
    printList(node1);
    free (node1);
    free (node2);
    free (node3);

    return 0;
}

