#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#define r0 return 0

static void closeNicely(int signal){
    puts("[!] Exiting!");
    exit(EXIT_SUCCESS);
}

int main(int argc, char *argv[]){
    int n = atoi(argv[1]);
    int k = 1;
    for(;n!=0;n--){
       printf("%d",n);
    }
    r0;
}
