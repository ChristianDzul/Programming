#include <stdio.h>
#include <stdbool.h>
//Variables Convencionales!!//
typedef struct person{    //Para crear variables especiales//
        int age; 
        char* name;
}PERSON;
int myInt = 3;  //para variables enteros//
float myFloat = 3.1416; //Para variables en decimales//
char myChar = '4'; //para cadenas, en este caso un numero//
double myDouble = 3.14161718102222; //para decimales pero con más numeros//
bool myBool = true; //Para atribuir TRUE (1) - FALSO (0) y que se se pueda hacer la función si se cumplen las condiciones
PERSON myPerson = {24, "Luis"};

//Variables especiales!// Un pointer es donde se puede guardar el valor de una variable que luego puede ser manipulabe ya que este apunta hacia el valor de esta
int* myPtr = &myInt;
int** myPtrDoble = &myPtr;


int main(int argc, char** argv){
        //Caractares especiales de pointers and address;       
        printf("myInt = %d,  address myInt: %p,  address myPtr: %p, valueMyPtr: %d\n", myInt, myPtr, &myPtr, *myPtr);
        printf("PointerDoble: myPtrDoble = %p, myPtrDobleAddress: %p\n", myPtrDoble, &myPtrDoble);
        //Desde Pointer doble, imprimir el valor de myInt y su direcion!:  
        printf("Access to myInt from PtrDoble: MyINT = %d, Adress myINT = %p\n", **myPtrDoble, &**myPtrDoble );    
        return 0;
}