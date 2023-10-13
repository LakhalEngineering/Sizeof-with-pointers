#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){

    int *p = malloc(100);
    int sizeP = sizeof(p);

    // memcpy(p, &sizep, sizeof(int));// copy the size into the first bytes
    printf("The size of pointer = %d", sizeP);
}
