#include<stdio.h>

#define MATRIX_SIZE 2

int main() {
    int matrix[MATRIX_SIZE][MATRIX_SIZE];

    for(int i = 0; i < MATRIX_SIZE; i++) {
        for(int j = 0; j < MATRIX_SIZE; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("You entered\n");

    for(int i = 0; i < MATRIX_SIZE; i++) {
        for(int j = 0; j < MATRIX_SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }

    printf("Determinant is %f",(float) (matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]));
}


