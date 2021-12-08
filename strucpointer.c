#include <stdio.h>

struct node
{
    //ATRIBUTOS//
    int dato1;
    float dato2;

};

struct mago
{
   int life;
   int mana;
};

int main(){
    struct node myNode = {3, 3.1312};
    printf("mynode: dato1 = %d, dato2: %f\n", myNode.dato1, myNode.dato2);

    //PARA GUARDAR LA INFO EN UNA ESTRUCTURA, USAMOS POINTER CON STRUCTURES EN DONDE
    //LA INFO ESTA ALOJADA EN UNA PARTE DE LA MEMORIA LA CUAL TIENE LA DIRECCION Y SE GUARDA EN EL POINTER//
    struct mago* Christian = (struct mago*)malloc(sizeof(struct mago)); // me brindara direccion de memoria donde se alojó mi variable, malloc recive un tamaño en bites
    //reeserva en mi memoria ram, la necesaria yy me da la dirección donde se guardó (escanea donde alojar y devuelve la dirección donde se guardó)
    //un dato INT equivale a 4 bits en la compu// so we can use function sizeof que me diira el taaño de una variable dependiendo el tipo
    //casteo: cambiar una variable en otra variable. (casteo)mallo(size(tipo de var))
    //atribuir valores y access a los atributos//
    (*Christian).life = 1000; //con el ". (permite acceso al atributo dentro de la estructura)" estaría mal, ya que no se sabe que se efecturá primero, para ello usamos jerarquia de parentessis, de lo que equivale christian, asigna un valor a life en esa variable struc
    (*Christian).mana = 2000; //o tambien representable como Christian->mana (solo con estructuras pointers que almacena la dirección de una estructura)
    //Christian = &something  asi tambien puedes acceder a la dirección, pero estas modificando a chris con smth y usass su dirección, pero con malloc creaas una dirección unica.


    
    return 0;

};
