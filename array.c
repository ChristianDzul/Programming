#include <stdio.h>
#include <stdlib.h>
#define TAM 10 

int sillasCine[TAM] = {0,0,0,0,0};

int matrix[2][3] = {{1,2,3}, {7,8,9}};

void fillArray (int anArray[],int number) {​
    for ( int i = 0; i<TAM; i++){​
        anArray[i] = number;
    }​
}​

void printArray(int anArray[], int tam){​
        for (int i = 0; i < tam; i++) {​
                printf("%d ", anArray[i]);
        }​
        printf("\n");
}​

int main(){
    ​
    fillArray(sillasCine, 1);
    printArray(sillasCine, TAM);
    printf("%d\n", (int)(sizeof(sillasCine)/sizeof(int)));
    int noFilas = 2;
    int noColum = 3;
    for (int i = 0; i< noFilas; i++){​
            for (int j = 0; j< noColum; j++) {​
                    printf("%d ", matrix[i][j]);
            }​;
            printf("\n");
        }​;
        return 0;
}​