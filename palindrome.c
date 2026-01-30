#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#define r0 return 0

int main(int c, char *args[]){
    if ( c != 2 ) {
        puts("[!] Insufficient arguements, fix.");
        exit(EXIT_FAILURE);
    }
    char *str = args[1];
    int len = 0;
    while (str[len]) len++;
    
    int is_palindrome = 1;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }
    
    printf("%s\n", is_palindrome ? "palindrome" : "not palindrome");
    r0;
}

