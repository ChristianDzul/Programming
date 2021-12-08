#include <stdio.h>

//Caracteres//
char myChar = '1'; //las comillas simples representar que solo es una cadena, o sea un caracter, en este caso un solo numero que se guarda en el index
//Cadenas de texto (numeros y letras)//
char myStringCAD [255] = "100"; //Lo mismo pero con un tamaño definido de 255 caracteres, en este caso las doble comillas estan registrando mas de un caracter
char myStringCAD [255] = {'1','0','0'}; //lo mismo que el anterior pero cada caracter pueso en index por index (individualmente)

//Cadenas de texto con pointer
char* myStr = "100"; // es igual que a los de arriba pero sin tamaño pre-definido, este se ajusta a los caracteres ingresados
char myListChar [3][255] = {"Luis","Christian", "Angelo"}; //PARA VARIOS VALORES
char** myList = {""}; //Para poner varios valores pero con pointers

int main(int argc, char** argv){ // int argc (puede indicar el num de valores ingresados) e Char** argv(valores a ingresar)  guarda valores cuando compilas "./ALIAS 3 hola" y donde el "./ALIAS" se considera como el primer valor
    printf("char: %c, string: %s", myStringCAD [0], myListChar[2] );
    return 0;
}
