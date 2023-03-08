#include<stdio.h>
void cubeByReference(int *n);

int main(void) {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("The original value of number is %d\n", number);
    cubeByReference(&number);
    printf("The new value of number is %d\n", number);
    return 0;
}

void cubeByReference(int *n) {
    *n = (*n) * (*n) * (*n);
}


