#include <stdio.h>
#include <stdlib.h>
int main(){
    char *name="hello";
    int size = 0;
    while (name[size] != '\0'){size++;}
    for(int i = size ; i != 0 ; i-- ){
        printf("%c",name[i-1]);
    }
    return 0;
}
