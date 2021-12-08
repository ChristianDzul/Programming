#include <stdio.h>
#include <stdlib.h>

int years = 24;

//Function type: Paso por Valor
void incrementAyear(int YEAR) {
        printf("año in function: %d\n", YEAR);
        YEAR++;
        printf("año in function: %d\n", YEAR);
}

// Function Type: Paso por Direccion!;
void incrementAyearPointer(int* intPointer) {
        *intPointer = *intPointer + 1;
}


int main () {
        printf("years: %d\n", years);
        // incrementAyear(years);
        incrementAyearPointer(&years);
        incrementAyearPointer(&years);
        incrementAyearPointer(&years);
        printf("years after 1 year: %d\n", years);
        return 0;
}