#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
typedef struct node {
    int data;
    struct node* nextNode;
} NODE;

int myInt = 10;

typedef struct node* list;

struct node* createNode(int data, struct node* nextNode) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    (*newNode).data = data;
    (*newNode).nextNode = nextNode;
    return newNode;
};

struct node* findLastNode(struct node* listToInsetData) {
    // el ultimo nodo siempre tiene como nexNode un valor null.    
    struct node* lastNode = NULL;
    struct node* ptrIterator = NULL;
    ptrIterator = listToInsetData;
    while ( ptrIterator != NULL )
    {
        if ( (*ptrIterator).nextNode == NULL ) {
            lastNode = ptrIterator;
            return lastNode;
        };
        ptrIterator = (*ptrIterator).nextNode;
    }
    return NULL;    
}

void append(struct node* listToInsetData, int data ) {
    //Caso ideal:    
    struct node* newNode = createNode(data, NULL);
    struct node* lasNodeInList = findLastNode(listToInsetData);
    (*lasNodeInList).nextNode = newNode;
    return;
}

void printListAddress(struct node*  lista ) {
    for (struct node* ptr = lista  ; ptr != NULL ; ptr = ptr->nextNode  ) {
        printf("node = %p, {data: %d, nextNode: %p}\n", ptr, (*ptr).data, (*ptr).nextNode);
    }
}

int main() {
    int *ptr  = &myInt;

    // struct node myFirstNode = {10, NULL};    
    // struct node *head = &myFirstNode;    
    
    //Crear nuestro primer nodo: es apuntado por head    
    struct node* head = (struct node*)malloc( sizeof(struct node));
    printf("head = %p, address head (&head) = %p \n", head, &head);
    
    //modificar el valor de mi struct    
    (*head).data = 10;
    (*head).nextNode = NULL;
    printf("-----\n");
    struct node* otroHead = createNode(11, NULL);
    append( otroHead, 12 );

    // Imprimir una link list;    
    printListAddress(otroHead);

    list sensorUart = createNode(0, NULL);

    for (int i = 0 ; i < 20   ; i++ ) {
        printf("-----\n");
        append(sensorUart, 1 );
        printListAddress(sensorUart); //pritList(sensorUart);        
        sleep(1000);
    }
}