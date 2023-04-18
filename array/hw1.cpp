//write a program to find the sum of rigt and left diagonal elements of 2D matrix

#include <stdio.h>

int main() {
    int rows, cols, i, j, left_sum = 0, right_sum = 0;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate left and right diagonal sums
    for (i = 0; i < rows; i++) {
        left_sum += matrix[i][i];
        right_sum += matrix[i][cols-i-1];
    }

    printf("Left diagonal sum: %d\n", left_sum);
    printf("Right diagonal sum: %d\n", right_sum);

    return 0;
}

