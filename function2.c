#include <stdio.h>
#include <stdbool.h>
#include <string.h>

//ES UNA VERSION ANTERIOR A "FUNCTION"
int powerToNumber(int number,int pow ) {
        printf("param1: %d, param2: %d\n", number, pow);
        int currentValue = number; // number**1        
        for (int i = 2; i<= pow; i++){
            currentValue = currentValue*number;    
        }
        return currentValue;
}

bool isStringLowerCase(name) {
        //algoritmo//
}
void sayHello(char* name) {
        if ( !isStringLowerCase(name) ){
                return;
        };
        printf("Hello %s\n", name);
        return;
}

int main(int argc, char** argv){
        // encuentra la n potencia de x number //       
        int result = powerToNumber( 2, 3 );
        printf("result = %d\n", result);
        char* aName = argv[1];
        sayHello(aName);
        return 0;
}