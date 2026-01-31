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
    char * NumberT = calloc(inputSize,sizeof(char));
    int index = 0;
    for(int location = inputSize; location != 0 ; location--){
      *(NumberT+index) = args[1][location-1];
      index++;
    }
    int ispl = 1;
    for(int i = 0; i < inputSize ; i++){
        if((*(NumberT+i) ^ args[1][i])){
                ispl=0;
                break;
        }
    }
    
    if(ispl){
        puts("Is a palindrome!");
    } else {
        puts("Not a palindrome!");
    }
                
    free(NumberT);
    r0;

}

