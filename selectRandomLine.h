#include <stdio.h>
#include <stdlib.h>

char* selectRandomLine(char* path){

    FILE* fileVariable = fopen(path, "r");
    char lineMemory[10];
    int ran = rand()%21;
    char* salida = "AnyValueNotImportant";

    for(int line = 1 ; fscanf(  fileVariable, "%s", lineMemory ) != EOF ; line++ ){
        if(line == ran){
            salida = lineMemory; 
            return salida;
        }
        
    }
    return salida;
}