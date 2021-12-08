#include <stdio.h>
#include <stdbool.h>
#include <string.h> 
#include <stdlib.h>





int main(int argc, char** argv){
   
//SUMAR DOS NUMEROS PERO CON CASTEO IMPLICITO Y USANDO CODICO ASCII//

    // int num1 = argv[1][0]-'0';
    // int num2 = argv[2][0]-'0'

    // printf("LA SUMA DA: %d\n", num1 + num2);

//SUMAR DOS NUMEROS DE DOS CIFRAS EN ARGV

    for (int i = 0; i <= 1 ; i++)
    {
        int number1 = argv [1][i]-'0';
        int number2 = argv [2][i]-'0';
        int suma = number1 + number2;
        printf("NUMERO1: %d\n", number1);
        printf("NUMERO2: %d\n", number2);
        printf("SUMA: %d\n", suma);
    } 

    // int size1 = strlen (argv[1]);
    // int size2 = strlen (argv[2]);
    // for (int i = 0; i < size1 && size2; i++)
    // {
    //     int number1 = argv [1][i]-'0';
    //     int number2 = argv [2][i]-'0';
    //     printf ("Num1(a): %d\n", number1);
    //     printf ("Num2: %d\n",number2);
    // }

    return 0;
}