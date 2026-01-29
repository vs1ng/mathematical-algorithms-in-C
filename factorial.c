#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#define r0 return 0

static void closeNicely(int signal){
    puts("[!] Exiting!");
    exit(EXIT_SUCCESS);
}

int main(int agrc, char *argv[]){
    int n = atoi(argv[1]);
    printf("%d! =",n); 
    int k = 1;
    for(;n!=0;n--){
        k=k*n;
    }
    printf(" %d\n",k);
    r0;
}
