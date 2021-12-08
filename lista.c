#include <stdio.h>
#include <stdlib.h>


typedef struct node {
    int data;
    struct node* nextNode;
} NODE;

// int myInt = 10;


typedef struct otroHead{
    int data2;
    struct otroHead* nudus;
} NODO2;



int main() {
    // int *ptr  = &myInt;
    // // struct node myFirstNode = {10, NULL};    // struct node *head = &myFirstNode;    //Crear nuestro primer nodo: es apuntado por head    struct node* head = (struct node*)malloc( sizeof(struct node));
    // printf("head = %p, address head (&head) = %p \n", head, &head);
    //modificar el valor de mi struct    (*head).data = 10;
    // (*head).nextNode = NULL;
    struct node* otroHead = createNode(11, NULL);
    printf("NodoValue= %d, NextNode = %p", otroHead);
}