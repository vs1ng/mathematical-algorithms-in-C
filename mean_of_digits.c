#include <stdio.h>
#include <stdlib.h>
#define r0 return 0

int main(int count, char * inputs[]){
    int sum = 0, len = 0;
    while (inputs[1][len] ^ '\0'){len++;}
    for(int i = 0 ; i < len ; i++){
        sum += inputs[1][i] - '0';
    }
    float avg = (float)sum/len;
    printf("\nNumber:%s\nSum:%i\nDigitCount:%i\nAvg:%f\n",inputs[1],sum,len,avg);
    r0;
}
