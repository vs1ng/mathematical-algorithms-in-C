#include <stdio.h>
#include <stdlib.h>

int digitalRoot(int n) {
    while (n >= 10) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    return n;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }
    
    int number = atoi(argv[1]);
    int result = digitalRoot(number);
    
    printf("Digital root of %d is %d\n", number, result);
    return 0;
}
