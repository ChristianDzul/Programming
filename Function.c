#include <stdio.h>
#include <stdbool.h>
#include <string.h> 
#include <stdlib.h>

bool isStringLowerCase(char* name) {
    int size = strlen(name);
    for (int i = 0; i < size; i++){
        if (name[i] >= 65 && name[i] <= 90)
        {
            return false;
        }
    }
    return true;
}

void sayHello(char* name) {
    if (!isStringLowerCase(name))
    {
        return;
    };
    printf("Hello: %s\n", name);
    return;
}

int main(int argc, char** argv) {

    char* aName = argv[1];
    sayHello(aName);

    return 0;
}