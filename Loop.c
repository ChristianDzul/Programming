#include <stdio.h>
#include "utils.h"



int main(){
        int number = 0;
        printf("While\n");
        while ( number < 10 ) {
                printf("%d\n", number);
                number++;
                sleep(1000);
        };
        printf("\n%d\n", number);
        printf("Do-While\n");
        number = 10;
        do {
                printf("%d\n", number);
                number++;
                sleep(1000);
        } while (number < 10 ); 
        printf("For\n");
        for (int i = 0; i< 10 && number < 15; i++, number ++ ) {
                printf("%d , %d\n", i, number);
                sleep(1000);
        }

        //AUMENTAR DE FORMA INFINITA//
        for ( ; ; number++){
                printf("%d\n", number);
                sleep(1000);   
        }
        return 0;
}