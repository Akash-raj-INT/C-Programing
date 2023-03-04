#include <stdio.h>

int main() {
    int total;
    printf("Enter no: ");
    scanf("%d", &total);
    float counter = 1.0;

    int average = (int)(total / counter);
    printf("Enter another no: ");
    scanf("%d", &total);

    // Do something with the average and total variables here...

    return 0;
}

