#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//MY FORM//
void isCapital(char letter) {
        if (letter >= 65 && letter <= 90)
        {
            printf("It is capital\n");
        }else
        {
            printf("It is not capital\n");
        }
    
}

//USING BOOL// uso de ternario condicion- expression1 (true)- expression2 (False) , las expresiones son lo que van a retornar si la condicion se cumple
//el ternario nos ayuda a que el codigo sea mas resumido y eficiente, al igual que legible
void isCapital(char character){
     if (character >= 65 && character <= 90)
        {
            printf("It is capital\n");
        }



}


int main(){
    isCapital('L');
    // printf("%d\n", isCapital('L'));
    return 0;
}