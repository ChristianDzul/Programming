#include <stdio.h>
#include <stdbool.h>
#include <string.h> 
#include <stdlib.h>

int a = 5;
float b = 3.1416;
char c = 'c';

// Char es una cadena de texto la cual en este caso el numero de telefono esta representado 
//como {'9','9','9','2','6','5','4','1','7','0'}

// bool isAPhoneNumber (char* number){
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%c\n", number[i]); //se puede poner un numero que representa a la posicion dentro del index, o poner "i" de forma general
//         if ((int)number[i] >= 48 && (int)number[i] <= 57) { //Casteto con condicional en la representacion de los numeros ASCII para que solo vayan entre 0 a 9

//         } else {
//             return false; //se representa con 0
//         }
        
//     }
//     return true; //se representa con 1
// }
//---------------------APLICANDO STRINGS-----------------------------///
bool isAPhoneNumber (char* number){
    if (strlen(number) != 10){ //o sea que el tamaño del numero, la cantidad de caracteres es diferente de 10 (ya sea mayor o menor), entoces no es un numero, por eso el "return false;"
        return false;
    };

    for (int i = 0; i < 10; i++) {
        // printf("%c\n", number[i]); 
        if ((int)number[i] >= 48 && (int)number[i] <= 57) {
            //pass
        }else {
            return false; 
        }
    }
    return true; 
}

int main(){

    printf("char ANSII 'c': %d\n", (int)c);
    printf("float b: %d\n", (int)b);
    float z = a/b;
    printf("z = %f\n",z);

    //HACER UNA FUNCIÓN "isAPhoneNumber("999457896") --> TRUE;
    //-------------TENIENDO UN VALOR SETEADO---------///
    // printf("isAPhoneNumber= %d\n", isAPhoneNumber("9992654170"));

    ///----------------PREGUNTANDO POR EL NUMERO DE TELEFONO--------///
    //--Creamos una variable con casteo para ahorrar memoria unico, para ello usamos malloc
    //Y procedemos a asignarlo al tipo de variable y el tamaño ordinario multiplicado por 10 ya que queremos 10 numeros
    char* InsertNumberPhone = (char*)malloc(sizeof(char)*10); 
    //AHORA USAMOS UN DO-WHILE , donde Do pregunta y while establece la condición
    do
    {
        printf("INSERT PHONE NUMBER:\n\t");
        scanf (" %s ", InsertNumberPhone );
    } while (!isAPhoneNumber(InsertNumberPhone));
    //Esto hace que la funcion primero pida el numero o realize una acción la cual se repite y no para hasta que se cumpla la
    //condicion en "WHILE"
    
    
    return 0;
}