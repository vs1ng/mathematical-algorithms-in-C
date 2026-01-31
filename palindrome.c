#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#define r0 return 0

int main(int c, char *args[]){
    if ( c != 2 ) {
        puts("[!] Insufficient arguements, fix.");
        exit(EXIT_FAILURE);
    }
    int inputSize = 0;
    while(args[1][inputSize] != '\0'){inputSize++;}
    int * NumberT = calloc(inputSize,sizeof(int));
    for(int location = inputSize; location != 0 ; location--){
      printf("%c ",args[1][location-1]);  
    }
    r0;
}

