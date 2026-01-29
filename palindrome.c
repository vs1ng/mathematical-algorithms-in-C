#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#define r0 return 0

int main(int c, char *args[]){
    if ( c != 2 ) {
        puts("[!] Insufficient arguements, fix.");
        exit(EXIT_FAILURE);
    }
    int n = 0;
    while (args[1][n] != '\0'){n++;}
    int *number = calloc(n,sizeof(int));
    *number = atoi(args[1]);
    printf("number: %d\tdigit count:%d",*number,n);
    r0;
}

