
//write a program to find the multiplication of 2D martrix
#include <stdio.h>

int main() {
    int mat1[10][10], mat2[10][10], prod[10][10];
    int i, j, k, rows1, cols1, rows2, cols2;

    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter the elements of first matrix:\n");
    for(i=0; i<rows1; i++) {
        for(j=0; j<cols1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    if(cols1 != rows2) {
        printf("Matrix multiplication not possible.");
        return 0;
    }

    printf("Enter the elements of second matrix:\n");
    for(i=0; i<rows2; i++) {
        for(j=0; j<cols2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Matrix multiplication
    for(i=0; i<rows1; i++) {
        for(j=0; j<cols2; j++) {
            prod[i][j] = 0;
            for(k=0; k<cols1; k++) {
                prod[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("Resultant matrix:\n");
    for(i=0; i<rows1; i++) {
        for(j=0; j<cols2; j++) {
            printf("%d ", prod[i][j]);
        }
        printf("\n");
    }

    return 0;
}

