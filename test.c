#include <stdio.h>
#include <stdlib.h>
int main(int c,char *arg[]){
    char number = *arg[1];
    int i = 0;
    while ( arg[1][i] != '\0' ) {
        i++;
    }
    printf("number of digits: %d",i);
    return 0;
}
