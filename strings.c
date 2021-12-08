#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 255
char str[SIZE] = "Luis";
char strCpy[SIZE] = {'H', 'o', 'l', 'a'};
char* strPuro =  "Christian";
typedef int integer;


int lenString( char* str){
        int count = 0;
        for ( int i = 0; str[i] != ; i++)
        {
                int length[i] = str1[i]; 
        }
        return str1;

}


char* catStr(char* str1, char* str2){
        char* result;
        int lenStr1 = strlen(str1);
        int lenStr2 = strlen(str2);

        int str1Length = lenString(str1);
        printf("LenofString: %d", str1Length);

        result = malloc(sizeof(char)*(lenStr1+lenStr2));
        // char result [SIZE];
        for (int i = 0; i < lenStr1 + lenStr2; i++) {
                if (i<lenStr1) {
                        result[i] = str1[i];
                }else {
                        result[i] = str2[i - lenStr2 - 2];
                }
        }    
        return result;
}







int main(){
        strPuro = "Gerardo";
        //strModification(str, "Carlos");//Algoritmo
        //string.h
        printf("%ld\n", strlen("Dia"));
        strcpy(str, "Carlos");
        printf("%s\n", str); 
        //Concatenar una cadena: unir dos strings, A + B =  AB;
        // char* catAB =  str + strPuro; //No se puede en C facilmente
        char* catAB = catStr(str, strCpy); //Funcion que no existe --> LuisHola //HacerEnC
        printf ("CATAB: %s\n", catAB );
        // strcat(str, strCpy);
        // printf("%s\n", str);
        
        //Comparar cadenas: compara cadena A con cadena B;
        // char christianYears[SIZE] = "21";
        // char luisYears[SIZE] = "21";
        // // if ( christianYears == luisYears ){
        // //         printf("They are the same years");
        // // }
        // if ( !strcmp(christianYears, luisYears) ){
        //         printf("They are the same years\n");
        // }
        // for ( int i = 0; luisYears[i] != '\0'; i++){
        //         printf("%c\n", luisYears[i]);
        // };
        
        return 0;
}